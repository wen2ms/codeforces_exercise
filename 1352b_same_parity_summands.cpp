#include <iostream>

int main() {
    int total_cases;
    std::cin >> total_cases;
    while (total_cases > 0) {
        --total_cases;
        int number;
        int count;
        std::cin >> number >> count;
        int odd = number - (count - 1);
        if (odd > 0 && odd % 2 == 1) {
            std::cout << "YES" << '\n';
            for (int i = 0; i < count - 1; ++i) {
                std::cout << "1 ";
            }
            std::cout << odd << '\n';
            continue;
        }
        int even = number - 2 * (count - 1);
        if (even > 0 && even % 2 == 0) {
            std::cout << "YES" << '\n';
            for (int i = 0; i < count - 1; ++i) {
                std::cout << "2 ";
            }
            std::cout << even << '\n';
            continue;
        }
        std::cout << "NO" << '\n';
    }

    return 0;
}
