#include <iostream>
#include <cmath>

int main() {
    double acceleration, speed, distance;
    std::cin >> acceleration >> speed >> distance;
    if (((distance / speed) - sqrt(2 * distance / acceleration)) > 0.01) {
        std::cout << '1';
    } else {
        std::cout << '2';
    }
    return 0;
}