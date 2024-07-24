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
void between_start_next(Node*prev,Node*nex,int d)
{
    Node*temp=new Node(d);
    temp->next=nex;
    prev->next=temp;

}
void insertAtpostion(Node*&head,int k,int d)
{
    Node*temp=head;
    int count=1;
    while(count<k-1)
    {
        temp=temp->next;
        count++;
    }
    Node*newnode=new Node(d);
    newnode->next=temp->next;
    temp->next=newnode;
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
void todelete(Node*head,int pos)
{
    Node*temp=head;
    //deleting head not working like this
    if(pos==1)
    {
       
       head=head->next;
       temp->next=NULL;
        delete temp;
    }
    else
    {
        int count=1;
        while(count<pos-1)
        {
            temp=temp->next;
            count++;
            }
            Node*temp1=temp->next;
            temp->next=temp1->next;
            delete temp1;
            }
}
int main()
{
    Node *node1=new Node(10);
    Node *head=node1;
    Node*tail=node1;
    printll(head);
    insertAthead(head,20);
    printll(head);
    between_start_next(head,tail,50);
    printll(head);
    insertAthead(head,30);
    printll(head);
    insertAttail(tail,40);
    printll(head);//if we enter node1 then it will start from that position 
    todelete(head,2);
    printll(head);

}
