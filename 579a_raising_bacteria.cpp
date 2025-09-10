#include <iostream>

int main() {
    int num;
    std::cin >> num;
    int bacteria = 0;
    while (num > 0) {
        if (num % 2 == 1) {
            ++bacteria;
        }
        num /= 2;
    }
    std::cout << bacteria << '\n';

    return 0;
}