#include <cstdint>
#include <iostream>
#include <vector>

void solve() {
    int nums_count;
    int multisets_counts;
    std::cin >> nums_count >> multisets_counts;
    std::vector<int> nums(nums_count);
    std::vector<int> freqs(nums_count + 1);
    for (int& num : nums) {
        std::cin >> num;
        ++freqs[num];
    }
    for (int& freq : freqs) {
        if (freq % multisets_counts != 0) {
            std::cout << 0 << '\n';
            return;
        }
        freq /= multisets_counts;
    }
    int64_t result = 0;
    int left = 0;
    int right = 0;
    std::vector<int> freqs_of_window(nums_count + 1);
    while (left <= right && right < nums_count) {
        ++freqs_of_window[nums[right]];
        while (freqs_of_window[nums[right]] > freqs[nums[right]]) {
            --freqs_of_window[nums[left]];
            ++left;
        }
        result += (right - left + 1);
        ++right;
    }
    std::cout << result << '\n';
}

int main() {
    int total_cases;
    std::cin >> total_cases;
    while (total_cases > 0) {
        --total_cases;
        solve();
    }

    return 0;
}