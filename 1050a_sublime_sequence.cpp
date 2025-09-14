#include <iostream>

int main() {
    int total_cases;
    std::cin >> total_cases;
    while (total_cases > 0) {
        --total_cases;
        int num;
        int count;
        std::cin >> num >> count;
        std::cout << (count % 2 == 1 ? num : 0) << '\n';
    }

    return 0;
}