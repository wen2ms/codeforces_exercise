#include <iostream>
#include <string>
#include <vector>

int main() {
    int total_cases;
    std::cin >> total_cases;
    while (total_cases > 0) {
        --total_cases;
        int len;
        std::string str;
        std::cin >> len >> str;
        std::vector<int> positions;
        for (int i = 0; i < len; ++i) {
            if (str[i] == '0') {
                positions.push_back(i + 1);
            }
        }
        std::cout << positions.size() << '\n';
        for (int position : positions) {
            std::cout << position << ' ';
        }
        std::cout << '\n';
    }

    return 0;
}