#include <iostream>

int main() {
    int total_cases;
    std::cin >> total_cases;

    int completed_problem = 0;

    while (total_cases > 0) {
        --total_cases;

        int count = 0;
        for (int j = 0; j < 3; ++j) {
            int has_solution = 0;

            std::cin >> has_solution;

            count += has_solution;
        }

        if (count >= 2) {
            ++completed_problem;
        }
    }

    std::cout << completed_problem << '\n';

    return 0;
}