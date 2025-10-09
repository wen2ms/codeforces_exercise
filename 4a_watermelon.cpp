#include <iostream>

int main() {
    int weight = 0;

    std::cin >> weight;

    if (weight % 2 == 0 && weight > 2) {
        std::cout << "YES" << '\n';
    } else {
        std::cout << "NO" << '\n';
    }

    return 0;
}