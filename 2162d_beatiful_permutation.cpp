#include <iostream>

int query(int type, int left, int right) {
    int sum;
    std::cout << type << ' ' << left << ' ' << right << std::endl;
    std::cin >> sum;
    return sum;
}

int main() {
    int total_cases;
    std::cin >> total_cases;
    while (total_cases > 0) {
        --total_cases;
        int nums_count;
        std::cin >> nums_count;
        int diff = query(2, 1, nums_count) - (nums_count * (nums_count + 1) / 2) - 1;
        int left = 1;
        int right = nums_count;
        while (left < right) {
            int mid = (left + right) / 2;
            int sum1 = query(1, 1, mid);
            int sum2 = query(2, 1, mid);
            if (sum1 < sum2) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }
        std::cout << '!' << ' ' << left << ' ' << left + diff << std::endl;
    }

    return 0;
}