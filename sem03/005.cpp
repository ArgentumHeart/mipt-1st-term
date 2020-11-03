#include <iostream>

const int MAX_N = 1000;

void qsort(int *,int,int);
int partition(int *, int,int);

void qsort(int *arr, int first, int last) {
    int part;
    if (first < last) {
        part = partition(arr, first, last);
        qsort(arr, first, part - 1);
        qsort(arr, part + 1, last);
    }
}

int partition(int *arr, int l, int h) {
    int pivot = arr[h];
    int i = l;
    for (int j = l; j < h; j++) {
        // тут меняем условие
        if (arr[j] <= pivot) {
            std::swap(arr[j], arr[i]);
            i++;
        }
    }
    std::swap(arr[i], arr[h]);
    return i;
}

int main() {
    // Сама задача довольно-таки скучная, поэтому давайте посмотрим на одну из реализаций qsort'a
    int arr[MAX_N], N;
    std::cin >> N;
    for (int i = 0; i < N; i++) {
        std::cin >> arr[i];
    }

    qsort(arr,0 , N-1);

    for (int i = 0; i < N; i++) {
        std::cout << arr[i] << ' ';
    }

    return 0;
}