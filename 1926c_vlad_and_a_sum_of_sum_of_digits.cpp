#include <iostream>
#include <vector>

int digit_sum(int num) {
    int result = 0;
    while (num > 0) {
        result += (num % 10);
        num /= 10;
    }
    return result;
}

int main() {
    int total_cases;
    std::cin >> total_cases;
    std::vector<int> sums(2e5 + 1);
    for (int i = 1; i <= 2e5; ++i) {
        sums[i] = sums[i - 1] + digit_sum(i);
    }
    while (total_cases > 0) {
        --total_cases;
        int num;
        std::cin >> num;
        std::cout << sums[num] << '\n';
    }

    return 0;
}