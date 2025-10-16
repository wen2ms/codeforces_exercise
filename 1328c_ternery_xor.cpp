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
        std::string num1(len, '0');
        std::string num2(len, '0');
        for (int i = 0; i < len; ++i) {
            if (str[i] == '1') {
                num1[i] = '1';
                num2[i] = '0';
                for (int j = i + 1; j < len; ++j) {
                    num2[j] = str[j];
                }
                break;
            }
            num1[i] = num2[i] = (str[i] - '0') / 2 + '0';
        }
        std::cout << num1 << '\n';
        std::cout << num2 << '\n';
    }

    return 0;
}