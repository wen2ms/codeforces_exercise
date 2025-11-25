#include <cstdint>
#include <iostream>
#include <string>
#include <vector>

int main() {
    int len;
    int num_of_letters;
    std::cin >> len >> num_of_letters;
    std::string str;
    std::cin >> str;
    std::vector<int> counts(26);
    for (int i = 0; i < num_of_letters; ++i) {
        char letter;
        std::cin >> letter;
        ++counts[letter - 'a'];
    }
    int64_t sum = 0;
    int right = 0;
    while (right < len) {
        int left = right;
        while (right < len && counts[str[right] - 'a'] > 0) {
            ++right;
        }
        int len_substr = right - left;
        sum += static_cast<int64_t>(len_substr) * (len_substr + 1) / 2;
        ++right;
    }

    std::cout << sum << '\n';

    return 0;
}