#include <iostream>

int main() {
    int total_cases;
    std::cin >> total_cases;

    while (total_cases > 0) {
        --total_cases;
        int len1;
        std::string str1;
        int len2;
        std::string str2;
        std::string ops;
        std::cin >> len1 >> str1 >> len2 >> str2 >> ops;

        for (int i = 0; i < len2; ++i) {
            if (ops[i] == 'V') {
                str1 = str2[i] + str1;
            } else {
                str1 += str2[i];
            }
        }

        std::cout << str1 << '\n';
    }

    return 0;
}