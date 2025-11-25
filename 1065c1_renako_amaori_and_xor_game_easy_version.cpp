#include <iostream>
#include <vector>

int main() {
    int total_cases;
    std::cin >> total_cases;
    while (total_cases > 0) {
        --total_cases;
        int nums_count;
        std::cin >> nums_count;
        std::vector<int> nums1(nums_count);
        std::vector<int> nums2(nums_count);
        int total_xor = 0;
        for (int& num : nums1) {
            std::cin >> num;
            total_xor ^= num;
        }
        for (int& num : nums2) {
            std::cin >> num;
            total_xor ^= num;
        }
        if (total_xor == 0) {
            std::cout << "Tie" << '\n';
            continue;
        }
        int maximum_index = 0;
        for (int i = 0; i < nums_count; ++i) {
            if (nums1[i] != nums2[i]) {
                maximum_index = i;
            }
        }
        std::cout << (maximum_index % 2 == 0 ? "Ajisai" : "Mai") << '\n';
    }

    return 0;
}