#include <iostream>
#include <string>

int main() {
    std::string str;
    std::cin >> str;
    std::string result;
    int len = str.length();
    for (int i = 0; i < len; ++i) {
        if (i + 2 < len && str[i] == 'W' && str[i + 1] == 'U' && str[i + 2] == 'B') {
            if (!result.empty() && result.back() != ' ') {
                result += ' ';
            }
            i += 2;
        } else {
            result.push_back(str[i]);
        }
    }
    std::cout << result << '\n';

    return 0;
}