#include <iostream>
#include <string>

int main() {
    int total_cases;
    std::cin >> total_cases;
    while (total_cases > 0) {
        --total_cases;
        int len;
        std::string str;
        std::cin >> len >> str;
        int zeros_count = 0;
        for (const char letter : str) {
            if (letter == '0') {
                ++zeros_count;
            }
        }
        if (zeros_count == 1) {
            std::cout << "BOB" << '\n';
            continue;
        }
        if (zeros_count % 2 == 1) {
            std::cout << "ALICE" << '\n';
            continue;
        }
        std::cout << "BOB" << '\n';
    }

    return 0;
}