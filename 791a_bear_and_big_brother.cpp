#include <iostream>

int main() {
    int weight_l;
    int weight_b;
    std::cin >> weight_l >> weight_b;
    
    int year = 0;
    while (weight_l <= weight_b) {
        ++year;
        weight_l *= 3;
        weight_b *= 2;
    }
    std::cout << year << '\n';

    return 0;
}