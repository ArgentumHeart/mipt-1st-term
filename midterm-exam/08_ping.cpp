#include <iostream>

const int MAX_N = 1001;

struct link {
    int x,y;
    int ping;
};

link arr[MAX_N] = {};
int max_ping;
int min_ping[MAX_N] = {};
int M, N;

void read_link(int index ) {
    link temp = {};
    std::cin >> temp.x >> temp.y >> temp.ping;
    arr[index] = temp;
}

void step (int current) {
    for (int i = 0; i < N; i++) {
        if (arr[i].x == current) {
            if (min_ping[arr[i].y] > arr[i].ping + min_ping[current]) {
                min_ping[arr[i].y] = arr[i].ping + min_ping[current];
                step(arr[i].y);
            }
        }
        if (arr[i].y == current) {
            if (min_ping[arr[i].x] > arr[i].ping + min_ping[current]) {
                min_ping[arr[i].x] = arr[i].ping + min_ping[current];
                step(arr[i].x);
            }
        }
    }
}

int main () {
    std::cin >> M >> N;
    for (int i = 0; i < N; i++) {
        read_link(i);
    }
    std::cin >> max_ping;

    for(int i = 2; i <= M; i++) {
        min_ping[i] = INT32_MAX;
    }
    step(1);


    std::cout << ((min_ping[M] <= max_ping) ? "YES" : "NO");

    return 0;
}