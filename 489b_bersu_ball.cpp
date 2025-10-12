#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <vector>

int main() {
    int num_of_boys;
    std::cin >> num_of_boys;
    std::vector<int> boys(num_of_boys);
    for (int& boy : boys) {
        std::cin >> boy;
    }
    int num_of_girls;
    std::cin >> num_of_girls;
    std::vector<int> girls(num_of_girls);
    for (int& girl : girls) {
        std::cin >> girl;
    }
    std::sort(boys.begin(), boys.end());
    std::sort(girls.begin(), girls.end());
    int num_of_pairs = 0;
    int boy_pos = 0;
    int girl_pos = 0;
    while (boy_pos < num_of_boys && girl_pos < num_of_girls) {
        if (std::abs(boys[boy_pos] - girls[girl_pos]) < 2) {
            ++num_of_pairs;
            ++boy_pos;
            ++girl_pos;
        } else if (boys[boy_pos] > girls[girl_pos]) {
            ++girl_pos;
        } else {
            ++boy_pos;
        }
    }
    std::cout << num_of_pairs << '\n';

    return 0;
}