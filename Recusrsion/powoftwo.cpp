#include <iostream>
using namespace std;
int toPower(int n)
{
    //base case
    if(n==0)
    {
        return 1;
    }
    //recursive case
    int smallAns =2*((toPower(n-1)));
    return smallAns;
}
int main()
{
    int n=3;
    cout<<toPower(n);
}
