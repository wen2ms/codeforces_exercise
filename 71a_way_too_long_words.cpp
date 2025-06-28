#include <iostream>
#include <string>

int main() {
    int n = 0;

    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        std::string str;

        std::cin >> str;

        int len = str.length();

        if (len <= 10) {
            std::cout << str << std::endl;
        } else {
            std::cout << str[0] + std::to_string(len - 2) + str[len - 1] << std::endl;
        }
    }

    return 0;
}