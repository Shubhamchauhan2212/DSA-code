#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    cout<<"Queue size: "<<q.size()<<endl;

    q.pop();
        cout<<"After pop Queue size: "<<q.size()<<endl;

    // while (!q.empty())
    // {
    //     cout << q.front() << " ";
    //     q.pop();
    // }

    return 0;
}