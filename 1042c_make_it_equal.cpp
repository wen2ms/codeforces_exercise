#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    int total_cases;
    std::cin >> total_cases;
    while (total_cases > 0) {
        --total_cases;
        int length;
        int parameter;
        std::cin >> length >> parameter;
        std::vector<int> nums1(length);
        for (int i = 0; i < length; ++i) {
            std::cin >> nums1[i];
            nums1[i] %= parameter;
            nums1[i] = std::min(nums1[i], parameter - nums1[i]);
        }
        std::vector<int> nums2(length);
        for (int i = 0; i < length; ++i) {
            std::cin >> nums2[i];
            nums2[i] %= parameter;
            nums2[i] = std::min(nums2[i], parameter - nums2[i]);
        }

        std::sort(nums1.begin(), nums1.end());
        std::sort(nums2.begin(), nums2.end());
        std::cout << (nums1 == nums2 ? "YES" : "NO") << '\n';
    }

    return 0;
}