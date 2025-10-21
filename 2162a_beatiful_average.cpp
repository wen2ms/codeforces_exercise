#include <algorithm>
#include <iostream>

int main() {
    int total_cases;
    std::cin >> total_cases;
    while (total_cases > 0) {
        --total_cases;
        int nums_count;
        std::cin >> nums_count;
        int maximum = 0;
        for (int i = 0; i < nums_count; ++i) {
            int num;
            std::cin >> num;
            maximum = std::max(maximum, num);
        }
        std::cout << maximum << '\n';
    }

    return 0;
}