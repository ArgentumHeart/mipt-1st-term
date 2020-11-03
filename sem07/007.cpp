#include <iostream>

void doubling(int** arr, unsigned int N);

void doubling(int** arr, unsigned int N) {
    int *p = new int[N * 2];
    for (int i = 0; i < N; i++) {
        p[i] = (*arr)[i];
    }

    delete [] (*arr);
    (*arr) = p;
}

int main () {
    int *arr = new int[5];
    for (int i = 0; i < 5; i++) {
        arr[i] = i;
    }
    std::cout << arr << '\n';

    doubling(&arr,5);

    std::cout << arr << '\n';
    std::cout << arr[2] << '\n';

    return 0;
}

