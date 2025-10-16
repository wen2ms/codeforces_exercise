#include <iostream>
#include <string>
#include <vector>

int main() {
    int rows_count;
    int cols_count;
    std::cin >> rows_count >> cols_count;
    std::vector<std::string> matrix(rows_count);
    for (int i = 0; i < rows_count; ++i) {
        std::string str;
        std::cin >> str;
        for (int j = 0; j < cols_count; ++j) {
            if (str[j] == '.') {
                if (((i + j) & 1) == 1) {
                    str[j] = 'W';
                } else {
                    str[j] = 'B';
                }
            }
        }
        std::cout << str << '\n';
    }

    return 0;
}