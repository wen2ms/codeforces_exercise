#include <iostream>

int main() {
    int n = 0;

    std::cin >> n;

    int completed_problem = 0;

    for (int i = 0; i < n; ++i) {
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

    std::cout << completed_problem << std::endl;

    return 0;
}