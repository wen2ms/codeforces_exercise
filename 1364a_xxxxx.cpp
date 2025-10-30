#include <iostream>

int main() {
    int total_cases;
    std::cin >> total_cases;
    while (total_cases > 0) {
        --total_cases;
        int nums_count;
        int hated;
        std::cin >> nums_count >> hated;
        int sum = 0;
        int start = -1;
        int end = 0;
        for (int i = 0; i < nums_count; ++i) {
            int num;
            std::cin >> num;
            sum += num;
            if (num % hated != 0) {
                if (start == -1) {
                    start = i;
                }
                end = i;
            }
        }
        if (sum % hated != 0) {
            std::cout << nums_count << '\n';
        } else if (start == -1) {
            std::cout << -1 << '\n';
        } else {
            std::cout << nums_count - std::min(start + 1, nums_count - end) << '\n';
        }
    }

    return 0;
}