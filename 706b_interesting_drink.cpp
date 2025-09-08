#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    int num_of_shops;
    std::cin >> num_of_shops;
    std::vector<int> prices(num_of_shops);
    for (int& price : prices) {
        std::cin >> price;
    }
    std::sort(prices.begin(), prices.end());

    int num_of_days;
    std::cin >> num_of_days;
    while (num_of_days > 0) {
        --num_of_days;
        int money;
        std::cin >> money;
        
        int low = 0;
        int high = num_of_shops - 1;
        int result = 0;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (prices[mid] <= money) {
                low = mid + 1;
                result = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        std::cout << result << '\n';
    }

    return 0;
}