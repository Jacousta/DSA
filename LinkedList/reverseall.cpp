#include <iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node * next;
    Node(int data)
    {
        this ->data=data;
        this ->next=NULL;
    }
};
void insertAthead(Node* &head,int data)
{
    Node* temp=new Node(data);
    temp->next=head;
    head=temp;
}
Node*llreverse(Node*head)
{
    Node*prev=NULL;
    Node*forward;
    Node*curr=head;
    while(curr!=NULL)
    {
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
    return prev;

}
void printll(Node* &head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp ->next;

    }
    cout<<endl;
}
int main()
{
    Node *node1=new Node(10);
    Node *head=node1;
    Node*tail=node1;
    insertAthead(head,20);
    insertAthead(head,30);
    insertAthead(head,40);
    printll(head);
    Node*newhead=llreverse(head);
    printll(newhead);
}
