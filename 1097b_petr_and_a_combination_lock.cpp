#include <iostream>
#include <vector>

int main() {
    int num_of_rotations;
    std::cin >> num_of_rotations;
    std::vector<int> rotations(num_of_rotations);
    for (int& rotation : rotations) {
        std::cin >> rotation;
    }
    int total_combinations = (1 << num_of_rotations) - 1;
    for (int i = 0; i <= total_combinations; ++i) {
        int sum_of_rotations = 0;
        for (int j = 0; j < num_of_rotations; ++j) {
            if ((i & (1 << j)) != 0) {
                sum_of_rotations += rotations[j];
            } else {
                sum_of_rotations -= rotations[j];
            }
        }
        if (sum_of_rotations % 360 == 0) {
            std::cout << "YES" << '\n';
            return 0;
        }
    }
    std::cout << "NO" << '\n';

    return 0;
}