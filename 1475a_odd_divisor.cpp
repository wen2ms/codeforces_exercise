#include <cstdint>
#include <iostream>

int main() {
    int total_cases;
    std::cin >> total_cases;
    while (total_cases > 0) {
        --total_cases;
        int64_t num;
        std::cin >> num;
        if ((num & num - 1) != 0) {
            std::cout << "YES" << '\n';
        } else {
            std::cout << "NO" << '\n';
        }
    }
    
    return 0;
}