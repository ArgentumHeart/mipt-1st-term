#include <iostream>
#include <cmath>

int main () {
    int MB;
    std::cin >> MB;

    std::cout << ceil(ceil(20 + log2(MB)) / 8);

    return 0;
}