#include <iostream>
using namespace std;
int count(int n)
{
    //base case
    if(n<0)
    {
        return 0;
    }
    else if(n==0)
    {
        return 1;
    }
    // recursive case
    return count(n-1)+count(n-2);

}
int main()
{
    int n=5;
    cout<<count(n);
    
}
//tle also exists