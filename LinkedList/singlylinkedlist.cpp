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
void insertAttail(Node* &tail,int data)
{
    Node* temp=new Node(data);
    tail->next=temp;
    tail=tail->next;

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
    printll(head);
    insertAttail(tail,40);
    printll(head);//if we enter node1 then it will start from that position 

}
