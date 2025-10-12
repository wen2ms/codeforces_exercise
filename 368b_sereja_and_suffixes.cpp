#include <iostream>
#include <unordered_set>
#include <vector>

int main() {
    int nums_count;
    int positions_count;
    std::cin >> nums_count >> positions_count;
    std::vector<int> nums(nums_count);
    std::unordered_set<int> hash;
    std::vector<int> distinct_nums_count(nums_count);
    for (int& num : nums) {
        std::cin >> num;
    }
    for (int i = nums_count - 1; i >= 0; --i) {
        hash.insert(nums[i]);
        distinct_nums_count[i] = hash.size();
    }
    while (positions_count > 0) {
        --positions_count;
        int position;
        std::cin >> position;
        std::cout << distinct_nums_count[position - 1] << '\n';
    }

    return 0;
}