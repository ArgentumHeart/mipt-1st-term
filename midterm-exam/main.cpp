#include <iostream>

const int MAX_N = 1000;
int counter = 0;

struct point {
    int x,y;
    int brightness;
    int count;
};

bool isBright(point a);
bool isCloseEnough(point a);
bool isEqual(point a, point b);

point arr[MAX_N] = {};

void read_point() {
    point temp = {};
    std::cin >> temp.x >> temp.y >> temp.brightness;
    temp.count = 1;
    if (isBright(temp) || isCloseEnough(temp)) {
        for (int i = 0; i < counter; i++) {
            if (isEqual(arr[i], temp)) {
                arr[i].count++;
                return;
            }
        }
        arr[counter++] = temp;
    }
}

bool compare(point a, point b) {
    if (a.brightness > b.brightness) return true;
    if (a.brightness < b.brightness) return false;

    if (a.count > b.count) return true;
    if (a.count < b.count) return false;

    if ((a.x * a.x + a.y * a.y) < (b.x * b.x + b.y * b.y)) return true;
    return false;
}

bool isEqual(point a, point b) {
    if (a.x != b.x) return false;
    if (a.y != b.y) return false;
    if (a.brightness != b.brightness) return false;
    return true;
}

bool isBright(point a) {
    return (a.brightness >= 10);
}

bool isCloseEnough(point a) {
    return ((a.x * a.x + a.y * a.y) <= 10000);
}

int main () {
    int N;
    std::cin >> N;
    for (int i = 0; i < N; i++) {
        read_point();
    }

    for (int i = 0; i < counter; i++) {
        std::cout << arr[i].x << ' ' << arr[i].y << ' ' << arr[i].brightness << ' ' << arr[i].count << '\n';
    }

    std::cout << compare(arr[2], arr[3]);

    return 0;
}