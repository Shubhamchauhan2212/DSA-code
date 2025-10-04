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

    int prefix[n];
    prefix[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] + arr[i];
    }
    cout<<"Prefix array: ";
    for (int i = 0; i < n; i++)
    {
        cout << prefix[i] << " ";
    }

    return 0;
}