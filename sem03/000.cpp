#include <iostream>

#define MAX_N 1000
// const int MAX_N = 1000;

int main() {
    int arr[MAX_N] = {}, N;
    std::cin >> N;
    for (int i = 0; i < N; i++) {
        std::cin >> arr[i];
    }
    for (int i = (N-1); i >= 0; i--) {
        std::cout << arr[i];
        std::cout << (i > 0 ? " " : "");
    }
    return 0;
}
