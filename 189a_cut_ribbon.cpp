#include <algorithm>
#include <iostream>
#include <limits>
#include <vector>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    int a;
    int b;
    int c;
    std::cin >> n >> a >> b >> c;
    std::vector<int> maximum_pieces(n + 1, std::numeric_limits<int>::min());
    maximum_pieces[0] = 0;
    for (int i = 1; i <= n; ++i) {
        if (i - a >= 0) {
            maximum_pieces[i] = std::max(maximum_pieces[i], maximum_pieces[i - a] + 1);
        }
        if (i - b >= 0) {
            maximum_pieces[i] = std::max(maximum_pieces[i], maximum_pieces[i - b] + 1);
        }
        if (i - c >= 0) {
            maximum_pieces[i] = std::max(maximum_pieces[i], maximum_pieces[i - c] + 1);
        }
    }
    std::cout << maximum_pieces[n] << '\n';

    return 0;
}