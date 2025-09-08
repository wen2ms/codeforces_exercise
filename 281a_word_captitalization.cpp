#include <cctype>
#include <iostream>
#include <string>

int main() {
    std::string str;
    std::cin >> str;
    str[0] = std::toupper(str[0]);
    std::cout << str << '\n';

    return 0;
}