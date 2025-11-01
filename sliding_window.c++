#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {2,4,6,8,10};
    int k = 3;
    int n = arr.size();

    int windowsum = 0;
    for (int i = 0; i < k; i++)
    { 
        windowsum += arr[i];
    }
    cout<<"First window sum: "<<windowsum<<endl;

    for (int i = k; i < n; i++)
    {
      windowsum += arr[i] - arr[i - k];
      cout<<"Next window sum: "<<windowsum<<endl;
    }
    
    return 0;
}