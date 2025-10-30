#include <iostream>
#include <vector>

int main() {
    int total_cases;
    std::cin >> total_cases;
    while (total_cases > 0) {
        --total_cases;
        std::vector<int> sides(4);
        for (int& side : sides) {
            std::cin >> side;
        }
        if (sides[0] == sides[1] && sides[0] == sides[2] && sides[0] == sides[3]) {
            std::cout << "YES" << '\n';
        } else {
            std::cout << "NO" << '\n';
        }
    }

    return 0;
}