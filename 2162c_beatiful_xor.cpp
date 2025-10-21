#include <iostream>

int main() {
    int total_cases;
    std::cin >> total_cases;
    while (total_cases > 0) {
        --total_cases;
        int num;
        int target;
        std::cin >> num >> target;
        int msb = 0;
        for (int i = 29; i >= 0; --i) {
            if ((num >> i & 1) == 1) {
                msb = i;
                break;
            }
        }
        int temp = (1 << (msb + 1)) - 1;
        if (target > temp) {
            std::cout << -1 << '\n';
            continue;
        }
        std::cout << 2 << '\n' << temp - num << ' ' << temp - target << '\n';
    }

    return 0;
}