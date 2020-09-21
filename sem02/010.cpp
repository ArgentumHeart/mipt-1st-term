#include <iostream>
using namespace std;

char unleveling(char c);
char get_a_letter();

//-------------------------------------------------------------

char get_a_letter() {
    char input;
    do {
        cin >> input;
    } while ( !(((input >= 'a') && (input <= 'z')) || ((input >= 'A') && (input <= 'Z'))));
    return input;
}

char unleveling(char c)
{
    if (c >= 'a' && c <= 'z')
        c += 'A' - 'a';
    return c;
}

int main()
{
    for (int i = 0; i < 10; i++)
        cout <<unleveling(get_a_letter());
    cout <<endl;
    return 0;
}