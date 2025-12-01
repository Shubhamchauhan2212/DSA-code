#include <iostream> 
using namespace std;

int main()
{
    int arr[] = {5, 9, 8, 7, 1, 3, 5, 4, 8, 2};
    int n = sizeof(arr) / sizeof(arr[0]); // total elements

    int maxn = arr[0];
    int minn = arr[0];

    for (int i = 0; i < n; i++)
    {
        maxn = max(maxn, arr[i]);
        minn = min(minn, arr[i]);
    }

    cout << "Maximum: " << maxn << endl;
    cout << "Minimum: " << minn << endl;
    return 0;
}