#include <iostream>
using namespace std;

int main()
{
    int a, b, m;
    cout << "Enter a, b modulas m: ";
    cin >> a >> b >> m;

    // modular addition
    int add = (a % m + b % m) % m;
    // modular subtraction
    int sub = ((a % m - b % m)+m) % m;
    // modular multiplication
    int mul = (a % m * b % m) % m;

    cout << "modular Addition: (a + b) % m = " << add << endl;
    cout << "modular Addition: (a - b) % m = " << sub << endl;
    cout << "modular multipication: (a * b) % m = " << mul << endl;
    return 0;
}