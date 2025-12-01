#include <iostream>
using namespace std;
int linearsearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " element: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cout << "Enter element to search: ";
    cin >> key;

    int result = linearsearch(arr, n, key);
    if (result != -1)
    {
        cout << "Element found at index: " << result;
    }
    else
    {
        cout << "Element not found";
    }

    return 0;
}