// dqueue is fully flexible
//

#include <bits/stdc++.h>
using namespace std;

int main()
{
    deque<int> dq = {
        4,
        1,
        5,
        2,
        8,
    };

    // dq.push_back(10); // [10]
    // dq.push_back(20); // [10, 20]
    // dq.push_front(3); // [5, 10, 20]
    // dq.push_front(1); // [1, 5, 10, 20]

    cout << "Before sort:  ";
    for (auto it = dq.begin(); it != dq.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    cout << "After sortin ascending order: ";
    sort(dq.begin(), dq.end());
    for (int x : dq)
    {
        cout << x << " ";
    }
    cout << endl;
    cout << "After sort in descending order: ";
    sort(dq.begin(), dq.end(), greater<int>());
    for (int x : dq)
    {
        cout << x << " ";
    }
    cout << endl;
    // dq.pop_back();  // [1, 5, 10]
    // dq.pop_front(); // [5, 10]
    // sort(dq.begin(), dq.end());

    auto it = find(dq.begin(), dq.end(), 5);
    dq.insert(it + 1, 5, 5);
    cout << "\nAfter insertion: ";
    for (auto x : dq)
        cout << x << " ";

    return 0;
}
