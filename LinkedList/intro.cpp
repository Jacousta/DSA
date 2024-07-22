#include <iostream>
using namespace std;
//creating node
class Node{
    public:
    int data;
    Node* next;
    // constructor
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
int main()
{
    Node* node=new Node(10);

    cout<<node->data;

}
