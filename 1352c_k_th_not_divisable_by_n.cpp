#include <iostream>

int main() {
    int total_cases;
    std::cin >> total_cases;
    while (total_cases > 0) {
        --total_cases;
        int number;
        int k_th;
        std::cin >> number >> k_th;
        std::cout << k_th + (k_th - 1) / (number - 1) << '\n';
    }

    return 0;
}