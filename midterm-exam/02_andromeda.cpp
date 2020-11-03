#include <iostream>

int main() {
    int n, current, max, counter = 0;
    std::cin >> n;
    if (n == 0) {
        std::cout << 0;
        return 0;
    }
    std::cin >> current;
    max = current;
    counter = 1;

    for (int i = 1; i < n; i++) {
        std::cin >> current;
        if (current > max) {
            counter = 1;
            max = current;
        }
        if (current == max) {
            counter++;
        }
    }

    std::cout << counter << '\n';
    return 0;
}