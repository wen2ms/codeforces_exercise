#include <iostream>
#include <string>
#include <unordered_map>

int main() {
    int num_of_balls;
    std::cin >> num_of_balls;
    std::unordered_map<std::string, int> teams_score;
    for (int i = 0; i < num_of_balls; ++i) {
        std::string team;
        std::cin >> team;
        ++teams_score[team];
    }
    std::string winner;
    int max_score = 0;
    for (const auto& [team, score] : teams_score) {
        if (score > max_score) {
            winner = team;
            max_score = score;
        }
    }

    std::cout << winner << '\n';

    return 0;
}