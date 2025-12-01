#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    int target = 10;

    sort(arr.begin(), arr.end());

    for (int i = 0; i < arr.size() - 2; i++) {
        int left = i + 1, right = arr.size() - 1;

        while (left < right) {
            int sum = arr[i] + arr[left] + arr[right];

            if (sum == target) {
                cout << arr[i] << " + " << arr[left] << " + " << arr[right]
                     << " = " << target << endl;
                left++;
                right--;
            }
            else if (sum < target)
                left++;
            else
                right--;
        }
    }

    return 0;
}
