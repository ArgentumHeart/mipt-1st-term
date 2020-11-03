#include <iostream>

const int MAX_N = 10;

using namespace std;

int main() {
    char arr[MAX_N][MAX_N] = {};
    int N, M;
    cin >> N >> M;
    // съедаем символ перевода строки.
    cin.get();
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            char input;
            cin.get(input);
            arr[i][j] = input;
        }
        cin.get();
    }

    for (int j = (M-1); j >= 0; j--) {
        for (int i = 0; i < N; i++) {
            std::cout << arr[i][j] << ' ';
        }
        std::cout << std::endl;
    }
    return 0;
}
