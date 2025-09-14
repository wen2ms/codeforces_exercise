#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    int total_cases;
    std::cin >> total_cases;
    while (total_cases > 0) {
        --total_cases;
        int num_of_rows;
        std::cin >> num_of_rows;
        std::vector<std::vector<int>> grid(num_of_rows);
        for (std::vector<int>& row : grid) {
            int nums_count;
            std::cin >> nums_count;
            row.resize(nums_count);
            for (int& num : row) {
                std::cin >> num;
            }
        }
        std::vector<int> result;
        while (!grid.empty()) {
            std::sort(grid.begin(), grid.end());
            int count = grid[0].size();
            for (const int num : grid[0]) {
                result.push_back(num);
            }
            std::vector<std::vector<int>> remain_grid;
            for (const std::vector<int>& nums : grid) {
                if (nums.size() > count) {
                    remain_grid.emplace_back(nums.begin() + count, nums.end());
                }
            }
            grid = remain_grid;
        }
        int result_count = result.size();
        for (int i = 0; i < result_count; ++i) {
            std::cout << result[i] << (i == result_count - 1 ? '\n' : ' ');
        }
    }

    return 0;
}