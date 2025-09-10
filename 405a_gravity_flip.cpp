#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    int size;
    std::cin >> size;
    std::vector<int> nums(size);
    for (int& num : nums) {
        std::cin >> num;
    }
    std::sort(nums.begin(), nums.end());

    for (int i = 0; i < size; ++i) {
        std::cout << nums[i] << (i == size - 1 ? '\n' : ' ');
    }

    return 0;
}