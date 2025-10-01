//checking each eleement and if key will found hten stop

#include <iostream>
using namespace std;
int linearsearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
            return i;
    }
    return -1;
}
int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int n = 5, key = 50;

    int result = linearsearch(arr, n, key);
    if (result != -1)
        cout << "Element found at index: " << result;
    else
    cout<<"ELEMENT NOT FOUND ";
    return 0;
}
