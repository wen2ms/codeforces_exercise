#include <iostream>
#include <vector>

int main() {
    int total_cases;
    std::cin >> total_cases;
    while (total_cases > 0) {
        --total_cases;
        int nums_count;
        std::cin >> nums_count;
        std::vector<std::vector<int>> nums(3);
        for (int i = 1; i <= nums_count; ++i) {
            if (i % 2 == 0) {
                nums[0].push_back(i);
            } else if (i % 3 == 0) {
                nums[1].push_back(i);
            } else {
                nums[2].push_back(i);
            }
        }
        std::vector<int> indexes{static_cast<int>(nums[0].size()) - 1, static_cast<int>(nums[1].size()) - 1,
                                 static_cast<int>(nums[2].size()) - 1};
        while (indexes[0] >= 1 && indexes[2] >= 0) {
            std::cout << nums[2][indexes[2]] << ' ';
            --indexes[2];
            std::cout << nums[0][indexes[0]] << ' ';
            --indexes[0];
            std::cout << nums[0][indexes[0]] << ' ';
            --indexes[0];
        }
        while (indexes[1] >= 1 && indexes[2] >= 0) {
            std::cout << nums[2][indexes[2]] << ' ';
            --indexes[2];
            std::cout << nums[1][indexes[1]] << ' ';
            --indexes[1];
            std::cout << nums[1][indexes[1]] << ' ';
            --indexes[1];
        }
        for (int i = indexes[0]; i >= 0; --i) {
            std::cout << nums[0][i] << ' ';
        }
        for (int i = indexes[1]; i >= 0; --i) {
            std::cout << nums[1][i] << ' ';
        }
        for (int i = indexes[2]; i >= 0; --i) {
            std::cout << nums[2][i] << ' ';
        }
        std::cout << '\n';
    }

    return 0;
}