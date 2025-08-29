#include <cctype>
#include <iostream>
#include <string>

int main() {
    std::string str1;
    std::string str2;
    std::cin >> str1 >> str2;

    for (char& letter : str1) {
        letter = std::tolower(letter);
    }
    for (char& letter : str2) {
        letter = std::tolower(letter);
    }

    if (str1 < str2) {
        std::cout << -1 << '\n';
    } else if (str1 > str2) {
        std::cout << 1 << '\n';
    } else {
        std::cout << 0 << '\n';
    }

    return 0;
}