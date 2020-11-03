#include <iostream>

const int MAX_N = 1001;

int main(){
    int cost[MAX_N + 1] = {};
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::cin >> cost[i];
    }
    int total[MAX_N + 1] = {};

    total[0] = cost[0];
    total[1] = cost[1];

    for (int i = 2; i <= n ; i++) {
        total[i] = cost[i] + std::min(total[i - 1], total[i - 2]);
    }
    std::cout << total[n] << std::endl;

    return 0;
}