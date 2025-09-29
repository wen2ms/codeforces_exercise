#include <cctype>
#include <iostream>
#include <string>

int main() {
    std::string str;
    std::cin >> str;
    int lower_count = 0;
    int upper_count = 0;
    for (const char letter : str) {
        if (letter >= 'a' && letter <= 'z') {
            ++lower_count;
        } else if (letter >= 'A' && letter <= 'Z') {
            ++upper_count;
        }
    }
    if (upper_count > lower_count) {
        for (char& letter : str) {
            letter = std::toupper(letter);
        }
    } else {
        for (char& letter : str) {
            letter = std::tolower(letter);
        }
    }
    std::cout << str << '\n';

    return 0;
}