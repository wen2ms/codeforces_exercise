#include <iostream>
#include <vector>

int pop_count(int num) {
    int count = 0;
    while (num > 0) {
        count += num & 1;
        num >>= 1;
    }
    return count;
}

int main() {
    int types_of_soldiers;
    int num_of_players;
    int friend_limit;
    std::cin >> types_of_soldiers >> num_of_players >> friend_limit;
    std::vector<int> armies(num_of_players);
    for (int& army : armies) {
        std::cin >> army;
    }
    int fedor;
    std::cin >> fedor;
    int num_of_friends = 0;
    for (int army : armies) {
        if (pop_count(army ^ fedor) <= friend_limit) {
            ++num_of_friends;
        }
    }
    std::cout << num_of_friends << '\n';

    return 0;
}