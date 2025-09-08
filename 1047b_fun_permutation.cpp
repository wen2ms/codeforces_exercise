#include <iostream>
#include <vector>

int main() {
    int total_cases;
    std::cin >> total_cases;
    while (total_cases > 0) {
        --total_cases;
        int size;
        std::cin >> size;
        std::vector<int> permutation(size);
        for (int& num : permutation) {
            std::cin >> num;
            std::cout << size + 1 - num << ' ';
        }
        std::cout << '\n';
    }

    return 0;
}