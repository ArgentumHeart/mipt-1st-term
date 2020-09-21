#include <iostream>
using namespace std;

unsigned int get_a_hexadecimal();

unsigned int get_a_hexadecimal() {
    char input;
    unsigned int res = 0;
    for (;;) {
        if (cin.peek() != '\n') {
            cin >> input;
            res *= 16;
            if ((input >= '0') && (input <= '9')) {
                res += input - '0';
            } else if ((input >= 'A') && (input <= 'F')) {
                res += input - 'A' + 10;
            } else {
                return 0;
            }
        } else {
            return res;
        }
    }
}

int main()
{
    cout <<get_a_hexadecimal() <<endl;
    return 0;
}
