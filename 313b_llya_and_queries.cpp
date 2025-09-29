#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string str;
    std::cin >> str;
    int num_of_queries;
    std::cin >> num_of_queries;
    int len = str.length();
    std::vector<int> prefix_same(len + 1);
    for (int i = 1; i <= len; ++i) {
        if (str[i] == str[i - 1]) {
            prefix_same[i] += prefix_same[i - 1] + 1;
        } else {
            prefix_same[i] += prefix_same[i - 1];
        }
    }
    for (int i = 0; i < num_of_queries; ++i) {
        int left;
        int right;
        std::cin >> left >> right;
        std::cout << prefix_same[right - 1] - prefix_same[left - 1] << '\n';
    }

    return 0;
}