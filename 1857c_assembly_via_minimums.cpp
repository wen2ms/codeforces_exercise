#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    int total_cases;
    std::cin >> total_cases;
    while (total_cases > 0) {
        --total_cases;
        int nums_a_count;
        std::cin >> nums_a_count;
        int nums_b_count = nums_a_count * (nums_a_count - 1) / 2;
        std::vector<int> nums_b(nums_b_count);
        for (int& num : nums_b) {
            std::cin >> num;
        }
        std::sort(nums_b.begin(), nums_b.end());
        for (int i = 0; i < nums_b_count; i += nums_a_count) {
            std::cout << nums_b[i] << ' ';
            --nums_a_count;
        }
        std::cout << nums_b[nums_b_count - 1] << '\n';
    }

    return 0;
}