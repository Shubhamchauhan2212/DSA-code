//stack is following lifo (last in first out)
// stack me sare operation top me hi hote hai last aur bich me kuch nai hoya

#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<int> st;

    // Push elements
    st.push(10);
    st.push(20);
    st.push(30);

    cout << "Top element: " << st.top() << endl; // 30

    st.pop();  // remove top
    cout << "New top: " << st.top() << endl;    // 20
    cout << "New top: " << st.top() << endl;    // 10

    cout << "Stack size: " << st.size() << endl; // 2
    cout << "Is empty? " << st.empty() << endl; // 0 (false)

    return 0;
}
