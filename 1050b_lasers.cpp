#include <iostream>
#include <vector>

int main() {
    int total_cases;
    std::cin >> total_cases;
    while (total_cases > 0) {
        --total_cases;
        int num_of_horizontal;
        int num_of_vertical;
        int target_x;
        int target_y;
        std::cin >> num_of_horizontal >> num_of_vertical >> target_x >> target_y;
        std::vector<int> horizontals(num_of_horizontal);
        std::vector<int> verticals(num_of_vertical);
        for (int& horizontal : horizontals) {
            std::cin >> horizontal;
        }
        for (int& vertical : verticals) {
            std::cin >> vertical;
        }
        std::cout << num_of_horizontal + num_of_vertical << '\n';
    }

    return 0;
}