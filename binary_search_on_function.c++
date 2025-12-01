//  dividing in half and if mid = key then return key;
// mid != key then go to left side or right side ;
#include <bits/stdc++.h>
using namespace std;

int binarysearch(int arr[], int n, int key)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == key)
        {
            return mid;
            break;
        }
        else if (key < arr[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int n, key;
    cout << "Enter the size of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " Sorted elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);

    cout << "Enter element to search: ";
    cin >> key;

    int pos = binarysearch(arr, n, key);
    if (pos != -1)
    {
        cout << "Element found at index: " << pos;
    }
    else
    {
        cout << "Element not found";
    }
    return 0;
}