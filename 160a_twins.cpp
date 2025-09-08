#include <functional>
#include <iostream>
#include <vector>

int main() {
    int count;
    std::cin >> count;
    std::vector<int> coins(count);
    int sum = 0;
    for (int& coin : coins) {
        std::cin >> coin;
        sum += coin;
    }
    int target = sum / 2;
    std::sort(coins.begin(), coins.end(), std::greater<int>());
    int ans = 0;
    while (target >= 0) {
        target -= coins[ans];
        ++ans;
    }
    std::cout << ans << '\n';

    return 0;
}