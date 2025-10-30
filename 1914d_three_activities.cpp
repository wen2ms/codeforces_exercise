#include <algorithm>
#include <functional>
#include <iostream>
#include <vector>

int main() {
    int total_cases;
    std::cin >> total_cases;
    while (total_cases > 0) {
        --total_cases;
        int num_of_days;
        std::cin >> num_of_days;
        std::vector<std::pair<int, int>> skiings(num_of_days);
        std::vector<std::pair<int, int>> movies(num_of_days);
        std::vector<std::pair<int, int>> boards(num_of_days);
        for (int i = 0; i < num_of_days; ++i) {
            std::cin >> skiings[i].first;
            skiings[i].second = i;
        }
        for (int i = 0; i < num_of_days; ++i) {
            std::cin >> movies[i].first;
            movies[i].second = i;
        }
        for (int i = 0; i < num_of_days; ++i) {
            std::cin >> boards[i].first;
            boards[i].second = i;
        }
        std::sort(skiings.begin(), skiings.end(), std::greater<>());
        std::sort(movies.begin(), movies.end(), std::greater<>());
        std::sort(boards.begin(), boards.end(), std::greater<>());
        int sum = 0;
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                if (skiings[i].second == movies[j].second) {
                    continue;
                }
                for (int k = 0; k < 3; ++k) {
                    if (boards[k].second == skiings[i].second || boards[k].second == movies[j].second) {
                        continue;
                    }
                    sum = std::max(sum, skiings[i].first + movies[j].first + boards[k].first);
                }
            }
        }
        std::cout << sum << '\n';
    }

    return 0;
}