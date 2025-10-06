#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int target = 10;

    int left = 0, right = arr.size() - 1;
    while (left < right)
    {
        int sum = arr[left] + arr[right];
        if (sum == target)
        {
            cout << arr[left] << " + " << arr[right] << " = " << target << endl;
            break;
        }
        else if (sum < target){
            left++;
        }
        else{
            right--;
        }
    }

    return 0;
}