#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
};

void traverseList(Node* head)
{
    Node* curr = head;
    while(curr->next != NULL)
    {
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}

void deleteNode(Node* head)
{
    Node* temp;
    if(head==NULL)
        return;
    temp=head;
    head=head->next;
    free(temp);
    return;
}
