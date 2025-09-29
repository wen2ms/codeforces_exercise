#include <iostream>
#include <vector>

int main() {
    int num_of_cells;
    int destination_cell;
    std::cin >> num_of_cells >> destination_cell;
    --destination_cell;
    std::vector<int> cells(num_of_cells - 1);
    for (int& cell : cells) {
        std::cin >> cell;
    }
    int current_cell = 0;
    while (current_cell <= destination_cell) {
        if (current_cell == destination_cell) {
            std::cout << "YES" << '\n';
            return 0;
        }
        current_cell += cells[current_cell];
    }
    std::cout << "NO" << '\n';

    return 0;
}