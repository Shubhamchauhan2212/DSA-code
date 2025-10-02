#include <iostream>
using namespace std;

int main()
{
    int a, b, gcd;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    int smaller = (a < b) ? a : b;

    for (int i = 1; i <= smaller; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            cout << i << " is common divisor \n";
            gcd = i;
        }
    }
    cout << "GCD of " << a << " and " << b << " is " << gcd << endl;
    return 0;
}