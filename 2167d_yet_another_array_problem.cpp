#include <cstdint>
#include <iostream>
#include <vector>

std::vector<int> primes;

void solve() {
    int nums_count;
    std::cin >> nums_count;
    std::vector<int64_t> nums(nums_count);
    for (int64_t& num : nums) {
        std::cin >> num;
    }
    for (int prime : primes) {
        for (int64_t num : nums) {
            if (num % prime != 0) {
                std::cout << prime << '\n';
                return;
            }
        }
    }
    std::cout << -1 << '\n';
}

std::vector<int> linear_sieve(int num) {
    std::vector<int> primes;
    std::vector<bool> is_prime(num + 1, true);
    for (int i = 2; i <= num; ++i) {
        if (is_prime[i]) {
            primes.push_back(i);
        }
        for (int prime : primes) {
            if (i * prime > num) {
                break;
            }
            is_prime[i * prime] = false;
            if (i % prime == 0) {
                break;
            }
        }
    }
    return primes;
}

int main() {
    primes = linear_sieve(53);

    int total_cases;
    std::cin >> total_cases;
    while (total_cases > 0) {
        --total_cases;
        solve();
    }

    return 0;
}