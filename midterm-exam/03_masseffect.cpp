#include <iostream>

const int max_n = 1000;

int main() {
    int n;
    int arr[max_n] = {};

    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    std::cout << arr[n/2];
    for (int i = n/2 + 1; i < n; i++) {
        std::cout << ' ' << arr[n - i - 1] << ' ' << arr[i];
    }

    return 0;
}