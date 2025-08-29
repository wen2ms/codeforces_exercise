#include <iostream>
#include <vector>

int main() {
    int count;
    int place;
    std::cin >> count >> place;

    std::vector<int> contestant(count);
    for (int i = 0; i < count; ++i) {
        std::cin >> contestant[i];
    }

    int result = 0;
    for (int i = 0; i < count; ++i) {
        if (contestant[i] > 0 && contestant[i] >= contestant[place - 1]) {
            ++result;
        }
    }
    std::cout << result;

    return 0;
}