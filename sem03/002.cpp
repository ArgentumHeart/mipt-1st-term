#include <iostream>

const int MAX_N = 10;

int main() {
    int arr[MAX_N][MAX_N] = {}, N;
    std::cin >> N;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            std::cin >> arr[i][j];
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            std::cout << arr[j][i] << ' ';
        }
        std::cout << std::endl;
    }

    return 0;
}
