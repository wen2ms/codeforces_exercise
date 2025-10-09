#include <cstdint>
#include <iostream>
#include <unordered_map>
#include <vector>

int main() {
    int total_cases;
    std::cin >> total_cases;
    while (total_cases > 0) {
        --total_cases;
        int nums_count;
        std::cin >> nums_count;
        std::vector<int> nums(nums_count);
        std::unordered_map<int, int> hash;
        int64_t num_of_pairs = 0;
        for (int i = 0; i < nums_count; ++i) {
            std::cin >> nums[i];
            num_of_pairs += hash[nums[i] - i];
            ++hash[nums[i] - i];
        }
        std::cout << num_of_pairs << '\n';
    }

    return 0;
}