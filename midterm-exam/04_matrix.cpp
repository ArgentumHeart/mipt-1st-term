#include <iostream>

const int max_n = 1000;

int main() {
    int n;
    int sum = 0;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int temp;
            std::cin >> temp;
            if ((i + j) == n - 1) {
                sum += temp;
            }
        }
    }

    std::cout << sum;

    return 0;
}