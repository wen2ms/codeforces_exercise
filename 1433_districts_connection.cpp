#include <iostream>
#include <utility>
#include <vector>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int total_cases;
    std::cin >> total_cases;
    while (total_cases > 0) {
        --total_cases;
        int nums_count;
        std::cin >> nums_count;
        std::vector<int> nums(nums_count);
        for (int& num : nums) {
            std::cin >> num;
        }
        std::vector<std::pair<int, int>> result;
        int index = -1;
        for (int i = 1; i < nums_count; ++i) {
            if (nums[i] != nums[0]) {
                index = i;
                result.emplace_back(index + 1, 1);
            }
        }
        if (index == -1) {
            std::cout << "NO" << '\n';
            continue;
        }
        for (int i = 1; i < nums_count; ++i) {
            if (nums[i] == nums[0]) {
                result.emplace_back(index + 1, i + 1);
            }
        }
        std::cout << "YES" << '\n';
        for (const auto& [start, end] : result) {
            std::cout << start << ' ' << end << '\n';
        }
    }

    return 0;
}