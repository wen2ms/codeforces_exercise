#include <iostream>
#include <string>

int main() {
    int count;
    std::string permutation;
    std::cin >> count >> permutation;
    int times = 0;
    for (int i = 1; i < count; ++i) {
        if (permutation[i] == permutation[i - 1]) {
            ++times;
        }
    }
    std::cout << times << '\n';

    return 0;
}