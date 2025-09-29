#include <iostream>
#include <vector>

int main() {
    int num_of_laptops;
    std::cin >> num_of_laptops;
    std::vector<std::pair<int, int>> laptops(num_of_laptops);
    for (auto& [price, quality] : laptops) {
        std::cin >> price >> quality;
    }
    for (const auto& [price, quality] : laptops) {
        if (price != quality) {
            std::cout << "Happy Alex" << '\n';
            return 0;
        }
    }

    std::cout << "Poor Alex" << '\n';

    return 0;
}