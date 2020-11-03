#include <iostream>

bool do_some_work(int* a, int* b) {
    return *a > *b;
};

int main () {
    int a, b;
    std::cin >> a >> b;

    std::cout << (do_some_work(&a, &b) ? (a - b) : (a + b));
    return 0;
}

