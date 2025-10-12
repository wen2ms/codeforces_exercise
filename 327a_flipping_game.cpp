#include <algorithm>
#include <iostream>
#include <limits>
#include <vector>

int main() {
    int nums_count;
    std::cin >> nums_count;
    std::vector<int> nums(nums_count);
    for (int& num : nums) {
        std::cin >> num;
    }
    int num_of_ones = 0;
    for (int& num : nums) {
        if (num == 0) {
            num = 1;
        } else {
            num = -1;
            ++num_of_ones;
        }
    }
    int sum = 0;
    int maximum_sum = std::numeric_limits<int>::min();
    for (const int num : nums) {
        sum = std::max(num, sum + num);
        maximum_sum = std::max(maximum_sum, sum);
    }
    std::cout << maximum_sum + num_of_ones << '\n';

    return 0;
}