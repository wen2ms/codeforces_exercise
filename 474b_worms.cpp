#include <iostream>
#include <vector>

int main() {
    int num_of_piles;
    std::cin >> num_of_piles;
    std::vector<int> piles(num_of_piles);
    std::vector<int> prefix_sum(num_of_piles + 1);
    for (int& pile : piles) {
        std::cin >> pile;
    }
    for (int i = 1; i <= num_of_piles; ++i) {
        prefix_sum[i] = prefix_sum[i - 1] + piles[i - 1];
    }
    int num_of_juicy;
    std::cin >> num_of_juicy;
    while (num_of_juicy > 0) {
        --num_of_juicy;
        int juicy;
        std::cin >> juicy;
        int low = 1;
        int high = num_of_piles;
        while (low < high) {
            int mid = (low + high) / 2;
            if (prefix_sum[mid] < juicy) {
                low = mid + 1;
            } else {
                high = mid;
            }
        }
        std::cout << low << '\n';
    }

    return 0;
}