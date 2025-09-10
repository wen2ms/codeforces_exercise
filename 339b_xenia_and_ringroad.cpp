#include <cstdint>
#include <iostream>
#include <vector>

int main() {
    int num_of_houses;
    int num_of_tasks;
    std::cin >> num_of_houses >> num_of_tasks;
    std::vector<int> tasks(num_of_tasks);
    for (int& task : tasks) {
        std::cin >> task;
    }
    int prev = 1;
    int64_t times = 0;
    for (const int task : tasks) {
        times += (num_of_houses - prev + task) % num_of_houses;
        prev = task;
    }
    std::cout << times << '\n';

    return 0;
}