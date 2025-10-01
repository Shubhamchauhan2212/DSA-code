// dqueue is fully flexible
//

#include <bits/stdc++.h>
using namespace std;

int main()
{
    deque<int> dq = {10, 9, 4, 8, 7};

    // dq.push_back(10); // [10]
    // dq.push_back(20); // [10, 20]
    // dq.push_front(3); // [5, 10, 20]
    // dq.push_front(1); // [1, 5, 10, 20]

    cout << "Before sort:  ";
    for (auto it = dq.begin(); it != dq.end(); it++)
    {
        cout << *it << " ";
    }

    cout<<"After sort: ";
    sort(dq.begin(), dq.end(), greater<int>()); 
    dq.pop_back();  
    for(int x: dq) cout<<x<<" ";
    // dq.pop_back();  // [1, 5, 10]
    // dq.pop_front(); // [5, 10]
    // sort(dq.begin(), dq.end());

    auto it = find(dq.begin(), dq.end(), 9);
    dq.insert(it + 1, 5, 5);
    cout << "\nAfter insertion: ";
    for (auto x : dq)
        cout << x << " ";   

    return 0;
}
