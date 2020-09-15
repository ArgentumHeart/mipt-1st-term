#include <iostream>
using namespace std;

unsigned long get_really_any_hexadecimal();

unsigned long get_really_any_hexadecimal() {
    char input;
    unsigned long res = 0;
    for (;;) {
        if ((cin.peek() != '\n') && (cin.peek() != ' ')) {
            cin >> input;
            if ((input >= '0') && (input <= '9')) {
                res *= 16;
                res += input - '0';
            } else if ((input >= 'A') && (input <= 'F')) {
                res *= 16;
                res += input - 'A' + 10;
            } else if ((input >= 'a') && (input <= 'f')) {
                res *= 16;
                res += input - 'a' + 10;
            }
        } else {
            return res;
        }
    }
}
int main()
{
    cout <<get_really_any_hexadecimal() <<endl;
    return 0;
}
