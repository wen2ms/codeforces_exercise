#include <iostream>

int main() {
    int nums_count;
    std::cin >> nums_count;
    int odd_count = 0;
    int odd_index = 0;
    int even_count = 0;
    int even_index = 0;
    for (int i = 1; i <= nums_count; ++i) {
        int num;
        std::cin >> num;
        if (num % 2 == 0) {
            ++even_count;
            even_index = i;
        } else {
            ++odd_count;
            odd_index = i;
        }
    }
    if (even_count == 1) {
        std::cout << even_index << '\n';
    } else {
        std::cout << odd_index << '\n';
    }

    return 0;
}