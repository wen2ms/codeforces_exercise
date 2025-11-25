#include <iostream>

int main() {
    int total_cases;
    std::cin >> total_cases;
    while (total_cases > 0) {
        --total_cases;
        int num_of_legs;
        std::cin >> num_of_legs;
        int num_of_chicken = num_of_legs / 2;
        if (num_of_legs % 2 == 1) {
            std::cout << 0 << '\n';
        } else {
            std::cout << num_of_legs / 2 + 1 << '\n';
        }
    }

    return 0;
}