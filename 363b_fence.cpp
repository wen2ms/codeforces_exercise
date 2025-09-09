#include <iostream>
#include <limits>
#include <vector>

int main() {
    int size;
    int segment;
    std::cin >> size >> segment;
    std::vector<int> prefix_sum(size + 1);
    for (int i = 1; i <= size; ++i) {
        int num;
        std::cin >> num;
        prefix_sum[i] = num + prefix_sum[i - 1];
    }
    int min = std::numeric_limits<int>::max();
    int start = -1;
    for (int i = 0; i <= size - segment; ++i) {
        if (prefix_sum[i + segment] - prefix_sum[i] < min) {
            min = prefix_sum[i + segment] - prefix_sum[i];
            start = i;
        }
    }
    std::cout << start + 1 << '\n';

    return 0;
}