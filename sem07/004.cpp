#include <iostream>

int* copyarr(int* a, unsigned int size);

int* copyarr(int* a, unsigned int size) {
    int *p = new int[size];
    for (int i = 0; i < size; i++) {
        p[i] = a[i];
    }
    return p;
}

/*
int* copyarr(int* a, unsigned int size) {
    //int *p = (int *)malloc(size * sizeof(int));
    int *p = (int *)calloc(size, sizeof(int));
    for (int i = 0; i < size; i++) {
        p[i] = a[i];
    }
    return p;
}
 */

int main () {
    int arr[5] = { 0, 2, 3, 5, 6 };

    std::cout << copyarr(arr,5)[2];

    return 0;
}

