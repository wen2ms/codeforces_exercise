#include <algorithm>
#include <iomanip>
#include <iostream>
#include <vector>

int main() {
    int num_of_lights;
    int street_length;
    std::cin >> num_of_lights >> street_length;
    std::vector<int> lights(num_of_lights);
    for (int& light : lights) {
        std::cin >> light;
    }
    std::sort(lights.begin(), lights.end());
    double diameter = std::max(lights[0], street_length - lights[num_of_lights - 1]);
    for (int i = 1; i < num_of_lights; ++i) {
        diameter = std::max(diameter, (lights[i] - lights[i - 1]) / 2.0);
    }
    std::cout << std::fixed << std::setprecision(9) << diameter << '\n';

    return 0;
}