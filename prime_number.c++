#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num, isprime = 1;
    cout << "Enter a numer to check number is prime or not: ";
    cin >> num;

    if (num <= 1)
    {
        isprime = 0;
    }
    else
    {
        for (int i = 2; i <= sqrt(num); i++)
        {
            if (num % i == 0)
            {
                isprime = 0;
                break;
            }
        }
    }
    if (isprime)
    {
        cout << num << " is prime number";
    }
    else
    {
        cout << num << " is not prime number";
    }

    return 0;
}