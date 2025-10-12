#include <iostream>

int main() {
    int total_cases;
    std::cin >> total_cases;

    while (total_cases > 0) {
        --total_cases;
        int angle;
        std::cin >> angle;
        if (360 % (180 - angle) == 0) {
            std::cout << "YES" << '\n';
        } else {
            std::cout << "NO" << '\n';
        }
    }

    return 0;
}