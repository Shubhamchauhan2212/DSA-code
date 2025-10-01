#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Array element are:";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    int sum = 0, product = 1;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        product *= arr[i];
    }
    cout << "\nSum = " << sum;
    cout << "\nAverage = " << (double)sum / n;
    cout << "\nProduct = " << product;

    return 0;
}