#include <iostream>

void swap(int* a, int* b) {
    std::swap(*a, *b);
}

int main () {
    int a, b;
    std::cin >> a >> b;

    swap(&a, &b);

    std::cout << a << ' ' << b;

    return 0;
}

