#include <cstdint>
#include <iostream>
#include <vector>

int main() {
    int total_cases;
    std::cin >> total_cases;
    while (total_cases > 0) {
        --total_cases;
        int num_of_steps;
        int num_of_queries;
        std::cin >> num_of_steps >> num_of_queries;
        std::vector<int> steps(num_of_steps);
        for (int& step : steps) {
            std::cin >> step;
        }

        std::vector<int64_t> prefix_sum(num_of_steps + 1);
        for (int i = 1; i <= num_of_steps; ++i) {
            prefix_sum[i] = prefix_sum[i - 1] + steps[i - 1];
        }
        std::vector<int> maximum_steps(steps);
        for (int i = 1; i < num_of_steps; ++i) {
            maximum_steps[i] = std::max(maximum_steps[i], maximum_steps[i - 1]);
        }

        for (int i = 0; i < num_of_queries; ++i) {
            int query;
            std::cin >> query;
            int low = 0;
            int high = num_of_steps;
            while (low < high) {
                int mid = (low + high) / 2;
                if (maximum_steps[mid] <= query) {
                    low = mid + 1;
                } else {
                    high = mid;
                }
            }
            std::cout << prefix_sum[low] << ' ';
        }
        std::cout << '\n';
    }

    return 0;
}