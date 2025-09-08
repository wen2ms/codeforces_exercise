#include <iostream>
#include <string>

int main() {
    std::string str;
    std::cin >> str;
    const std::string kHello = "hello";
    int index = 0;
    for (const char letter : str) {
        if (letter == kHello[index]) {
            ++index;
        }
        if (index == 5) {
            break;
        }
    }
    if (index == 5) {
        std::cout << "YES" << '\n';
    } else {
        std::cout << "NO" << '\n';
    }

    return 0;
}