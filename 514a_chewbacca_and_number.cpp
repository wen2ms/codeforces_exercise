#include <iostream>
#include <string>

int main() {
    std::string number;
    std::cin >> number;
    int len = number.length();
    if (number[0] > '4' && number[0] < '9') {
        number[0] = '9' - number[0] + '0';
    }
    for (int i = 1; i < len; ++i) {
        if (number[i] > '4') {
            number[i] = '9' - number[i] + '0';
        }
    }
    std::cout << number << '\n';

    return 0;
}