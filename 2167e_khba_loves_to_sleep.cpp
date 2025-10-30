#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    int total_cases;
    std::cin >> total_cases;
    while (total_cases > 0) {
        --total_cases;
        int nums_count;
        int minimum_points_count;
        int maximum;
        std::cin >> nums_count >> minimum_points_count >> maximum;
        std::vector<int> nums(nums_count);
        for (int& num : nums) {
            std::cin >> num;
        }
        std::sort(nums.begin(), nums.end());
        std::vector<std::vector<int>> ranges;
        int low = 0;
        int high = maximum + 1;
        while (low < high) {
            int mid = (low + high) / 2;
            int count = 0;
            for (int i = 1; i < nums_count; ++i) {
                count += std::max(0, nums[i] - mid - (nums[i - 1] + mid) + 1);
            }
            if (nums[0] >= mid) {
                count += nums[0] - mid + 1;
            }
            if (nums[nums_count - 1] <= maximum - mid) {
                count += maximum - (nums[nums_count - 1] + mid) + 1;
            }
            if (count >= minimum_points_count) {
                low = mid + 1;
            } else {
                high = mid;
            }
        }
        --low;
        std::vector<int> points;
        int left = 0;
        for (int i = 0; i < nums_count; ++i) {
            while (points.size() < minimum_points_count && left + low <= nums[i]) {
                points.push_back(left);
                ++left;
            }
            left = std::max(left, nums[i] + low);
        }
        while (points.size() < minimum_points_count && left <= maximum) {
            points.push_back(left);
            ++left;
        }
        for (int point : points) {
            std::cout << point << ' ';
        }
        std::cout << '\n';
    }

    return 0;
}