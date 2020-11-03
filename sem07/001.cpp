#include <iostream>

struct something {
    int a;
    bool b;
    char c;
};

struct something* calc_address(struct something* start, unsigned int number);

struct something* calc_address(struct something* start, unsigned int number) {
    return start + number;
}

int main () {
    something arr[5] = {
            { 0, true, 'c' },
            { 1, true, 'c' },
            { 2, true, 'c' },
            { 3, true, 'c' },
            { 4, true, 'c' }
    };

    std::cout << calc_address(arr, 4) -> a;

    return 0;
}
