#include <algorithm>
#include <iostream>

int main() {
    int total_rides;
    int special_rides;
    int one_ticket;
    int special_ticket;
    std::cin >> total_rides >> special_rides >> one_ticket >> special_ticket;

    int minimum_rubles = std::min({one_ticket * total_rides,
                                   total_rides / special_rides * special_ticket + total_rides % special_rides * one_ticket,
                                   (total_rides + special_rides - 1) / special_rides * special_ticket});

    std::cout << minimum_rubles << '\n';

    return 0;
}