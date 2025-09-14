#include <iostream>

int main() {
    int total_cases;
    std::cin >> total_cases;
    while (total_cases > 0) {
        --total_cases;
        int num_of_requirements;
        int count;
        std::cin >> num_of_requirements >> count;
        int result = 0;
        int prev = 0;
        int side = 0;
        for (int i = 0; i < num_of_requirements; ++i) {
            int current;
            int requirement;
            std::cin >> current >> requirement;
            if ((current + requirement - prev - side) % 2 == 1) {
                result += (current - prev - 1);
            } else {
                result += current - prev;
            }
            prev = current;
            side = requirement;
        }
        result += count - prev;
        std::cout << result << '\n';
    }

    return 0;
}