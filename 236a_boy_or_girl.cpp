#include <iostream>
#include <vector>

int main() {
    std::string str;
    std::cin >> str;
    std::vector<int> freqs(26);
    int distinct_len = 0;
    for (const char letter : str) {
        if (freqs[letter - 'a'] == 0) {
            ++freqs[letter - 'a'];
            ++distinct_len;
        }
    }
    if (distinct_len % 2 == 0) {
        std::cout << "CHAT WITH HER!" << '\n';
    } else {
        std::cout << "IGNORE HIM!" << '\n';
    }

    return 0;
}