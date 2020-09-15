#include <iostream>
#include <cmath>

bool is_simple(int n) {
    // ejudge не даёт вставить include <cmath>
    for (int i = 2; i <= n/2; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main () {
    int n;
    std::cin >> n;
    for (int i = 1; i <= n; i++)
        if ( is_simple(i) )
            std::cout << i << ' ';
    std::cout << std::endl;
    return 0;
}