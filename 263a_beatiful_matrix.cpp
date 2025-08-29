#include <iostream>

int main() {
    int index = -1;
    int value = 0;
    while (value != 1) {
        std::cin >> value;
        ++index;
    }

    std::cout << std::abs(index / 5 - 2) + std::abs(index % 5 - 2) << '\n';

    return 0;
}