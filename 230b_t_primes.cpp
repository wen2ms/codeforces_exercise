#include <cstdint>
#include <iostream>
#include <unordered_set>
#include <vector>

std::unordered_set<int64_t> solve() {
    int n = 1e6 + 1;
    std::vector<int> primes;
    std::vector<bool> is_prime(n, true);
    for (int i = 2; i <= n; ++i) {
        if (is_prime[i]) {
            primes.push_back(i);
        }
        for (int prime : primes) {
            if (i * prime > n) {
                break;
            }
            is_prime[i * prime] = false;
            if (i % prime == 0) {
                break;
            }
        }
    }
    std::unordered_set<int64_t> set;
    for (int i = 2; i < n; ++i) {
        if (is_prime[i]) {
            set.insert(static_cast<int64_t>(i) * i);
        }
    }
    return set;
}

int main() {
    int nums_count;
    std::cin >> nums_count;
    std::unordered_set<int64_t> t_primes = solve();
    for (int i = 0; i < nums_count; ++i) {
        int64_t num;
        std::cin >> num;
        if (t_primes.contains(num)) {
            std::cout << "YES" << '\n';
        } else {
            std::cout << "NO" << '\n';
        }
    }

    return 0;
}