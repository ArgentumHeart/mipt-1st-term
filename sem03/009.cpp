#include <iostream>
using namespace std;

char leveling(char c);


char leveling(char c) {
    if ((c <= 'Z') && (c >= 'A')) return (c - 'A' + 'a');
    return c;
}

int main()
{
    char c;
    do
    {
        cin.get(c);
        cout << leveling(c);
    } while (c != '\n');
    cout << endl;
    return 0;
}