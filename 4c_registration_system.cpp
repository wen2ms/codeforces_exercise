#include <iostream>
#include <string>
#include <unordered_map>

int main() {
    int num_of_names;
    std::cin >> num_of_names;
    std::unordered_map<std::string, int> freq;
    while (num_of_names > 0) {
        --num_of_names;
        std::string name;
        std::cin >> name;
        auto iter = freq.find(name);
        if (iter != freq.end()) {
            std::cout << name + std::to_string(iter->second) << '\n';
            ++(iter->second);
        } else {
            std::cout << "OK" << '\n';
            freq[name] = 1;
        }
    }

    return 0;
}