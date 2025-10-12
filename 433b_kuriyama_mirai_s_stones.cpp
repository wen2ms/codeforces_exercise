#include <algorithm>
#include <cstdint>
#include <iostream>
#include <vector>

int main() {
    int num_of_stones;
    std::cin >> num_of_stones;
    std::vector<int> stones(num_of_stones);
    for (int& stone : stones) {
        std::cin >> stone;
    }
    std::vector<int64_t> prefix_sum(num_of_stones + 1);
    for (int i = 1; i <= num_of_stones; ++i) {
        prefix_sum[i] = prefix_sum[i - 1] + stones[i - 1];
    }
    std::sort(stones.begin(), stones.end());
    std::vector<int64_t> prefix_sorted_sum(num_of_stones + 1);
    for (int i = 1; i <= num_of_stones; ++i) {
        prefix_sorted_sum[i] = prefix_sorted_sum[i - 1] + stones[i - 1];
    }

    int num_of_queries;
    std::cin >> num_of_queries;
    while (num_of_queries > 0) {
        --num_of_queries;
        int type;
        int left;
        int right;
        std::cin >> type >> left >> right;
        if (type == 1) {
            std::cout << prefix_sum[right] - prefix_sum[left - 1] << '\n';
        } else if (type == 2) {
            std::cout << prefix_sorted_sum[right] - prefix_sorted_sum[left - 1] << '\n';
        }
    }

    return 0;
}