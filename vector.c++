// means aage se bhi element add kar sakte hai piche se bhi add kar sakte hai
//  aage se bhi delete kar sakte hai aur piche se bhi delete kar sakte hai
//   aur agar bich me element delete kiya ya fir add kiya to shifting hogi

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {15, 4, 8, 54};

    // Insert
    v.push_back(10);
    v.push_back(20);
    v.emplace_back(30);
    v.emplace_back(40);

    // Access
    cout << "First element: " << v.front() << endl;
    cout << "middle element: " << v.at(2) << endl;
    cout << "Last element: " << v.back() << endl;

    // Iterate
    cout << "Elements: ";
    for (auto x : v)
        cout << x << " ";

    // Size
    cout << "\nSize: " << v.size() << endl;

    // Erase
    // v.erase(v.begin()); // remove first
    cout << "After sort: ";

    sort(v.begin() + 0, v.begin() + 3);
    // sirf index 1 se 2 tak sort karega

    for (auto x : v)
        cout << x << " ";

    return 0;
}
