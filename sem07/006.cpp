#include <iostream>

int* doubling(int* arr, unsigned int N);

int* doubling(int* arr, unsigned int N)
{
    int *p = new int[N * 2];
    for (int i = 0; i < N; i++)
        p[i] = arr[i];
    delete[] arr;
    return p;
}

int main () {
    int *arr = new int[5];
    for (int i = 0; i < 5; i++) {
        arr[i] = i;
    }

    std::cout << doubling(arr,5)[2];

    return 0;
}

