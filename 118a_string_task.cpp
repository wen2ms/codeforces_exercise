#include <cctype>
#include <iostream>
#include <string>

int main() {
    std::string str;
    std::cin >> str;
    std::string ans;
    int len = str.length();

    for (int i = 0; i < len; ++i) {
        char letter = std::tolower(str[i]);
        if (letter != 'a' && letter != 'o' && letter != 'y' && letter != 'e' && letter != 'u' && letter != 'i') {
            ans += '.';
            ans += letter;
        }
    }
    std::cout << ans << '\n';

    return 0;
}