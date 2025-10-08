#include <bits/stdc++.h>
using namespace std;

int main()
{
    int data[3] = {10, 20, 30};
    int next[3] = {1, 2, -1};

    int head = 0;

    cout << "Linked list: ";

    int current = head;
    while (current != -1)
    {
        cout << data[current] << " -> ";
        current = next[current];
            
    }
    cout << "NULL" << endl;
    return 0;
}