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
        std::vector<int> nums(nums_count);
        bool has_odd = false;
        bool has_even = false;
        for (int& num : nums) {
            std::cin >> num;
            if (num % 2 == 0) {
                has_even = true;
            } else {
                has_odd = true;
            }
        }
        if (has_odd && has_even) {
            std::sort(nums.begin(), nums.end());
        }
        for (int num : nums) {
            std::cout << num << ' ';
        }
        std::cout << '\n';
    }

    return 0;
}