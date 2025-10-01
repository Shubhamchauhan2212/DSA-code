#include <bits/stdc++.h>
using namespace std;

int main() {
    priority_queue<int> pq; // max-heap by default

    // Push elements
    pq.push(10);
    pq.push(30);
    pq.push(20);

    cout << "Top element: " << pq.top() << endl; // 30 (largest)

    // pq.pop(); // remove top
    cout << "New Top: " << pq.top() << endl;    // 20

    // Add another element
    pq.push(40);
    cout << "After push, Top: " << pq.top() << endl; // 40

    return 0;
}
