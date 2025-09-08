#include <iostream>

int main() {
    int count;
    std::cin >> count;
    int sum_x = 0;
    int sum_y = 0;
    int sum_z = 0;
    while (count > 0) {
        --count;
        int force_x;
        int force_y;
        int force_z;
        std::cin >> force_x >> force_y >> force_z;
        sum_x += force_x;
        sum_y += force_y;
        sum_z += force_z;
    }
    if (sum_x == 0 && sum_y == 0 && sum_z == 0) {
        std::cout << "YES" << '\n';
    } else {
        std::cout << "NO" << '\n';
    }

    return 0;
}