#include <iostream>
using namespace std;

unsigned int sum_of_numbers(unsigned long long int n);
unsigned long long int nonacci(unsigned int n);

//----------------------------------------------------

unsigned long long int nonacci(unsigned int n) {
    int arr[10000] = {0, 0, 0, 0, 0, 0, 0, 1};
    for (int counter = 8; counter < n; counter++) {
        arr[counter] = 0;
        for (int i = 1; i < 9; i++) {
            arr[counter] += arr[counter - i];
        }
    }
    return arr[n - 1];
}

unsigned int sum_of_numbers(unsigned long long int n)
{
    unsigned int res = 0;
    while (n)
    {
        res += n % 10;
        n /= 10;
    }
    return res;
}

int main()
{
    unsigned int n;
    cin >>n;
    cout <<sum_of_numbers(nonacci(n)) <<endl;
    return 0;
}

