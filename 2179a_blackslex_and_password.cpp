#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int total_cases;
    std::cin >> total_cases;
    while (total_cases > 0) {
        --total_cases;
        int k;
        int x;
        std::cin >> k >> x;
        std::cout << k * x + 1 << '\n';
    }

    return 0;
}