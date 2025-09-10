#include <iostream>

int main() {
    int initial_price;
    int money;
    int num_of_bananas;
    std::cin >> initial_price >> money >> num_of_bananas;

    int cost = initial_price * (num_of_bananas + 1) * num_of_bananas / 2;
    std::cout << (cost - money > 0 ? cost - money : 0) << '\n';

    return 0;
}