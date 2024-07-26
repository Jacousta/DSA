#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void insertAthead(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}
int findmiddle(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    Node *ans = head;
    if (count % 2 == 0)
    {
        for (int k = 0; k <= (count / 2) - 1; k++)
        {
            ans = ans->next;
        }
        
    }
    else if (count % 2 != 0)
    {
        for (int k = 0; k < count / 2; k++)
        {
            ans = ans->next;
        }
        return ans->data;
    }
    return ans->data;
}
void printll(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;
    insertAthead(head, 20);
    insertAthead(head, 30);
    insertAthead(head, 40);
    insertAthead(head, 50);
    insertAthead(head, 60);
    insertAthead(head, 70);
    insertAthead(head, 80);
    insertAthead(head, 90);
    printll(head);
    cout << findmiddle(head);
}
