#include <cstdint>
#include <iostream>

int main() {
    int64_t rows;
    int64_t cols;
    int64_t side;
    std::cin >> rows >> cols >> side;

    std::cout << ((rows + side - 1) / side) * ((cols + side - 1) / side) << '\n';

    return 0;
}