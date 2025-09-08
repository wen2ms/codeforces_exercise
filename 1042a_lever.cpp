#include <iostream>
#include <vector>

int main() {
    int total_cases;
    std::cin >> total_cases;
    while (total_cases > 0) {
        --total_cases;
        int length;
        std::cin >> length;

        std::vector<int> nums_a(length);
        std::vector<int> nums_b(length);
        for (int& num : nums_a) {
            std::cin >> num;
        }
        for (int& num : nums_b) {
            std::cin >> num;
        }

        int result = 1;
        for (int i = 0; i < length; ++i) {
            if (nums_a[i] > nums_b[i]) {
                result += nums_a[i] - nums_b[i];
            }
        }

        std::cout << result << '\n';
    }

    return 0;
}