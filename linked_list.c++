#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};
void printList(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL"<<endl;
}

int main()
{
    Node* head = new Node(10);
    head->next = new Node(20);  
    head->next->next = new Node(30);  
    head->next->next->next = new Node(40);

    cout<<"Before insertion: ";
    printList(head);

    return 0;
};