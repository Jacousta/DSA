#include <iostream>
using namespace std;
void printcount(int n)
{
    //base case
    if(n==0)
    {
        return;
    }
    //recursive case
    else
    {
        printcount(n-1);
        cout<<n;
    }
}
int main()
{
    int n=4;
    printcount(n);
}
