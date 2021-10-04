
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

Node* insertNode(Node* head, int data)
{
    Node* temp;
    temp=(Node*)malloc(sizeof(Node));
    temp->data=data;
    temp->next=NULL;
    if(head == NULL)
        head=temp;
    else
    {
        temp->next=head;
        head=temp;
    }
    return head;
}
