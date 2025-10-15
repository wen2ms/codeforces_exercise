#include <cstdlib>
#include <iostream>

int main() {
    int x_1;
    int y_1;
    int x_2;
    int y_2;
    std::cin >> x_1 >> y_1 >> x_2 >> y_2;
    if (x_1 != x_2 && y_1 != y_2 && std::abs(x_1 - x_2) != std::abs(y_1 - y_2)) {
        std::cout << -1 << '\n';
    } else if (x_1 == x_2) {
        std::cout << x_1 + std::abs(y_1 - y_2) << ' ' << y_1 << ' ' << x_2 + std::abs(y_1 - y_2) << ' ' << y_2 << '\n';
    } else if (y_1 == y_2) {
        std::cout << x_1 << ' ' << y_1 + std::abs(x_1 - x_2) << ' ' << x_2 << ' ' << y_2 + std::abs(x_1 - x_2) << '\n';
    } else {
        std::cout << x_1 << ' ' << y_2 << ' ' << x_2 << ' ' << y_1 << '\n';
    }

    return 0;
}