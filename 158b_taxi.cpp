#include <iostream>
#include <vector>

int main() {
    int count;
    std::cin >> count;
    std::vector<int> freqs(5);
    for (int i = 0; i < count; ++i) {
        int num;
        std::cin >> num;
        ++freqs[num];
    }
    int total = freqs[4] + freqs[3] + freqs[2] / 2;
    freqs[1] -= freqs[3];
    if (freqs[2] % 2 == 1) {
        ++total;
        freqs[1] -= 2;
    }
    if (freqs[1] > 0) {
        total += (freqs[1] + 3) / 4;
    }
    std::cout << total << '\n';

    return 0;
}