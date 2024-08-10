#include <iostream>
using namespace std;
//using stl we can implement stack
//using array or linked list we can implement stack
class Stack{
    //properties 
    public:
    int *arr;
    int size;
    int top;
    //behavior
    //constructor
    Stack(int size)
    {
        this->size=size;
        arr=new int[size];
        top=-1;
    }
    //checking stack is empty or not

    bool isEmpty()
    {
        if(top==size)
        {
            return true;
        }
        else{
            return false;
        }
    }
    //pushing element
    void push(int element)
    {
        if(size-top>1)
        {
            arr[++top]=element;
        }
        else
        {
            std::cout<<"Stack is full"<<std::endl;
            }
    }
    //popping element
    void pop()
    {
        if(isEmpty())
        {
            std::cout<<"Stack is empty"<<std::endl;
            
        }
        else
        {
            top--;
        }
    }
    //peeking element
    int peek()
    {
        if(isEmpty())
        {
            std::cout<<"Stack is empty"<<std::endl;
            return -1;
        }
        else{
            return arr[top];
        }
    }
};
int main()
{
    // // creation of stack
    // stack<int> s;
    // // entering element
    // s.push(10);
    // s.push(20);
    // // deleting
    // s.pop();
    // // printing top element
    // cout << s.top() << endl;
    // // check empty
    // if (s.empty())
    // {
    //     cout << "stack is empty" << endl;
    // }
    // else
    // {
    //     cout << "stack is not empty" << endl;
    // }

    cout<<"Class wala output"<<endl;
    Stack*k=new Stack(3);
    // k.push(20);
    // k.push(10);
    // k.push(30);
    // cout<<k.peek();
    // k.push(40);

}