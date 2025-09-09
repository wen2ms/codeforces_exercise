#include <iostream>

int main() {
    std::string str;
    std::cin >> str;
    bool has_print = false;
    for (const char letter : str) {
        if (letter == 'H' || letter == 'Q' || letter == '9') {
            has_print = true;
            break;
        }
    }
    std::cout << (has_print ? "YES" : "NO") << '\n';

    return 0;
}