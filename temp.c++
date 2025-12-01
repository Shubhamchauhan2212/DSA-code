#include <bits/stdc++.h>
using namespace std;
void selectio_sort(int arr[], int n)
{
    for (int i = 0; i <= n - 2; i++)
    {
        int mini = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[mini])
            {
                mini = j;
            }
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }
}
int main()
{
    int n;
    cout << "Enter number of element: ";
    cin >> n;

    int *arr = new int[n];
    cout << "Enter " << n << " unsorted element: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    selectio_sort(arr,n);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}