#include <cstdint>
#include <iostream>
#include <unordered_set>

std::unordered_set<int64_t> cubes;

void solve() {
    int64_t target;
    std::cin >> target;
    for (int64_t i = 1; i * i * i <= target; ++i) {
        if (cubes.contains(target - i * i * i)) {
            std::cout << "YES" << '\n';
            return;
        }
    }
    std::cout << "NO" << '\n';
}

int main() {
    int total_cases;
    std::cin >> total_cases;

    for (int64_t i = 1; i * i * i <= 1e12; ++i) {
        cubes.insert(i * i * i);
    }
    while (total_cases > 0) {
        --total_cases;
        solve();
    }

    return 0;
}