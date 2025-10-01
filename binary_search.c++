//all time divide and check ;

#include <iostream>
#include <algorithm>         //for sorting array 
using namespace std;

int main()
{
    int n, key;
    cout << "Enter size of array; ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " Sorted elemets: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n); // apply when user not enter sorted array 

    cout << "Enter elemenet to search: ";
    cin >> key;

    int low = 0, high = n - 1, pos = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == key)
        {
            pos = mid;
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

    if (pos != -1)
    {
        cout << "Element found at index " << pos;
    }
    else
    {
        cout << "Element not found ";
    }

    return 0;
}