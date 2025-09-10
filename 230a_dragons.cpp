#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    int strength;
    int num;
    std::cin >> strength >> num;
    std::vector<std::pair<int, int>> dragons(num);
    for (auto& [cost, reward] : dragons) {
        std::cin >> cost >> reward;
    }
    std::sort(dragons.begin(), dragons.end());
    for (int i = 0; i < num; ++i) {
        if (strength <= dragons[i].first) {
            std::cout << "NO" << '\n';
            return 0;
        }
        strength += dragons[i].second;
    }
    std::cout << "YES" << '\n';

    return 0;
}