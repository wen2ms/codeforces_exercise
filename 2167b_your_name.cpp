#include <iostream>
#include <string>
#include <vector>

int main() {
    int total_cases;
    std::cin >> total_cases;
    while (total_cases > 0) {
        --total_cases;
        int len;
        std::cin >> len;
        std::string boy;
        std::string your_name;
        std::cin >> boy >> your_name;
        std::vector<int> boy_count(26);
        std::vector<int> your_name_count(26);
        for (int i = 0; i < len; ++i) {
            ++boy_count[boy[i] - 'a'];
            ++your_name_count[your_name[i] - 'a'];
        }
        if (boy_count == your_name_count) {
            std::cout << "YES" << '\n';
        } else {
            std::cout << "NO" << '\n';
        }
    }

    return 0;
}