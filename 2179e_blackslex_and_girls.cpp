#include <iostream>
#include <numeric>
#include <vector>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int total_cases;
    std::cin >> total_cases;
    while (total_cases > 0) {
        --total_cases;
        int n;
        int x;
        int y;
        std::cin >> n >> x >> y;
        std::string str;
        std::cin >> str;
        std::vector<int> nums(n);
        for (int& num : nums) {
            std::cin >> num;
        }
        int count_x = 0;
        int count_y = 0;
        int count = 0;
        for (int i = 0; i < n; ++i) {
            if (str[i] == '0') {
                ++count;
                count_x += nums[i] / 2 + 1;
            } else {
                count_y += nums[i] / 2 + 1;
            }
        }
        if (std::accumulate(nums.begin(), nums.end(), 0LL) > x + y) {
            std::cout << "NO" << '\n';
            continue;
        }
        if (x < count_x) {
            std::cout << "NO" << '\n';
            continue;
        }
        if (y < count_y) {
            std::cout << "NO" << '\n';
            continue;
        }
        if (count == n && x < y + n) {
            std::cout << "NO" << '\n';
            continue;
        }
        if (count == 0 && y < x + n) {
            std::cout << "NO" << '\n';
            continue;
        }
        std::cout << "YES" << '\n';
    }

    return 0;
}