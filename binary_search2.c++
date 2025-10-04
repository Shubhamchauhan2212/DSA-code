#include <iostream>
using namespace std;
int binarysearch(int arr[], int n, int key)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] > key)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}

int main()
{
    int arr[] = {1, 4, 7, 2, 5, 8, 3, 6, 9};
    int n = 9, key = 9;

    int result = binarysearch(arr, n, key);
    if(result!= -1)
    {
        cout<<"Element found at index: "<<result;
    }
    else{
        cout<<"Element not found";
    }
    return 0;
}