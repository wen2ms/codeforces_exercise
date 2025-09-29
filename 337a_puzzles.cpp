#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    int num_of_students;
    int num_of_puzzles;
    std::cin >> num_of_students >> num_of_puzzles;
    std::vector<int> puzzles(num_of_puzzles);
    for (int& puzzle : puzzles) {
        std::cin >> puzzle;
    }
    std::sort(puzzles.begin(), puzzles.end());
    int minimal_difference = puzzles[num_of_students - 1] - puzzles[0];
    for (int i = 1; i <= num_of_puzzles - num_of_students; ++i) {
        minimal_difference = std::min(minimal_difference, puzzles[i + num_of_students - 1] - puzzles[i]);
    }
    std::cout << minimal_difference << '\n';

    return 0;
}