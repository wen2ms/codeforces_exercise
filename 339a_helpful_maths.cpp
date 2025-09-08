#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string str;
    std::cin >> str;
    int len = str.length();
    std::vector<int> count(3);
    for (int i = 0; i < len; ++i) {
        if (str[i] != '+') {
            ++count[str[i] - '1'];
        }
    }
    std::string ans;
    for (int i = 0; i < 3; ++i) {
        int freq = count[i];
        while (freq > 0) {
            ans += std::to_string(i + 1) + '+';
            --freq;
        }
    }

    ans.pop_back();
    std::cout << ans << '\n';

    return 0;
}