#include <iostream>
using namespace std;

int main()
{
    int a, b, gcd, lcm;
    cout << "Enter two number: ";
    cin >> a >> b;

    int smaller = (a < b) ? a : b;
    for (int i = 1; i <= smaller; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            cout << i << " is commen divisor\n";
            gcd = i;
        }
    }
    lcm = (a * b)/gcd;
    cout << "GCD of " << a << " and " << b << " is " << gcd << endl;
    cout << "LCM(using gcd) of " << a << " and " << b << " is " << lcm << endl;
    return 0;
}   