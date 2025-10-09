#include <iostream>

int main() {
    int num;
    int num_of_subtractions;
    std::cin >> num >> num_of_subtractions;
    for (int i = 0; i < num_of_subtractions; ++i) {
        if (num % 10 == 0) {
            num /= 10;
        } else {
            --num;
        }
    }
    std::cout << num << '\n';

    return 0;
}