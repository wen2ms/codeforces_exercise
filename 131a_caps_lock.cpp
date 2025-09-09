#include <cctype>
#include <iostream>
#include <string>

int main() {
    std::string str;
    std::cin >> str;
    int len = str.length();
    bool is_caps = true;
    for (int i = 1; i < len; ++i) {
        if (str[i] >= 'a') {
            is_caps = false;
        }
    }

    if (is_caps) {
        for (char& letter : str) {
            if (letter >= 'a') {
                letter -= 32;
            } else {
                letter += 32;
            }
        }
    }
    std::cout << str << '\n';

    return 0;
}