#include <iostream>
#include <string>

int main() {
    int total_cases;
    std::cin >> total_cases;
    while (total_cases > 0) {
        --total_cases;
        std::string str;

        std::cin >> str;

        int len = str.length();

        if (len <= 10) {
            std::cout << str << '\n';
        } else {
            std::cout << str[0] + std::to_string(len - 2) + str[len - 1] << '\n';
        }
    }

    return 0;
}