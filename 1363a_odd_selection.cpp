#include <iostream>
#include <vector>

void solve() {
    int nums_count;
    int num_of_selection;
    std::cin >> nums_count >> num_of_selection;
    std::vector<int> nums(nums_count);
    int num_of_odds = 0;
    int num_of_evens = 0;
    for (int& num : nums) {
        std::cin >> num;
        if (num % 2 == 1) {
            ++num_of_odds;
        }
    }
    num_of_evens = nums_count - num_of_odds;
    for (int i = 1; i <= std::min(num_of_selection, num_of_odds); i += 2) {
        if (num_of_selection - i <= num_of_evens) {
            std::cout << "Yes" << '\n';
            return;
        }
    }
    std::cout << "No" << '\n';
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