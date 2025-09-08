#include <iostream>
#include <string>

int main() {
    std::string str;
    std::cin >> str;
    int times = 0;
    int len = str.length();

    if (str.find("1111111") != std::string::npos || str.find("0000000") != std::string::npos) {
        std::cout << "YES" << '\n';
    } else {
        std::cout << "NO" << '\n';
    }
    return 0;
}