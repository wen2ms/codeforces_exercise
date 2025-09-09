#include <iostream>
#include <string>

bool is_lucky(const int integer) {
    std::string str = std::to_string(integer);
    for (const char letter : str) {
        if (letter != '4' && letter != '7') {
            return false;
        }
    }
    return true;
}

int main() {
    int num;
    std::cin >> num;
    for (int i = 4; i <= num; ++i) {
        if (num % i == 0 && is_lucky(i)) {
            std::cout << "YES" << '\n';
            return 0;
        }
    }
    std::cout << "NO" << '\n';

    return 0;
}