#include <iostream>

const int MAX_N = 1000;

int main() {
    int arr[MAX_N] = {}, N;
    double average = 0;
    std::cin >> N;
    for (int i = 0; i < N; i++) {
        std::cin >> arr[i];
        average += arr[i];
    }
    average = average / N;
    for (int i = 0; i < N; i++) {
        if (arr[i] > average) std::cout << arr[i] << ' ';
    }
    return 0;
}
