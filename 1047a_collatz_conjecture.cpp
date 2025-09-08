#include <iostream>

int main() {
    int total_cases;
    std::cin >> total_cases;
    while (total_cases > 0) {
        --total_cases;
        int iterations;
        int final;
        std::cin >> iterations >> final;
        int initial = (final << iterations);
        std::cout << initial << '\n';
    }

    return 0;
}