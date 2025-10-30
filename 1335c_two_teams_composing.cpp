#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    int total_cases;
    std::cin >> total_cases;
    while (total_cases > 0) {
        --total_cases;
        int nums_count;
        std::cin >> nums_count;
        std::vector<int> counts(nums_count + 1);
        for (int i = 0; i < nums_count; ++i) {
            int skill;
            std::cin >> skill;
            ++counts[skill];
        }
        int maximum_count = *max_element(counts.begin(), counts.end());
        int num_of_zeros = 0;
        for (const int count : counts) {
            if (count == 0) {
                ++num_of_zeros;
            }
        }
        int diff = nums_count + 1 - num_of_zeros;
        std::cout << std::max(std::min(maximum_count - 1, diff), std::min(maximum_count, diff - 1)) << '\n';
    }

    return 0;
}