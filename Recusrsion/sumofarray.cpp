#include <iostream>
using namespace std;
int sum(int arr[],int n)
{
    //base case
    if(n==1)
    {
    return arr[0];
    }
    //recursive case
    int ans=0;
    ans=ans+sum(arr+1,n-1);
    return ans+arr[0];
}
int main()
{
    int arr[1]={1};
    int n=1;
    cout<<sum(arr,n);
}
