#include <array>
#include <iostream>
#include <string>

int main() {
    int total_cases;
    std::cin >> total_cases;
    while (total_cases > 0) {
        --total_cases;
        std::string str;
        std::cin >> str;
        std::array<int, 3> count{};
        int len = str.length();
        int minimum_len = len + 1;
        int left = 0;
        for (int right = 0; right < len; ++right) {
            ++count[str[right] - '1'];
            while (count[str[left] - '1'] > 1) {
                --count[str[left] - '1'];
                ++left;
            }
            if (count[0] > 0 && count[1] > 0 && count[2] > 0) {
                minimum_len = std::min(minimum_len, right - left + 1);
            }
        }
        std::cout << (minimum_len == len + 1 ? 0 : minimum_len) << '\n';
    }

    return 0;
}