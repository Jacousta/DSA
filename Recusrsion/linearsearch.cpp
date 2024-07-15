#include <iostream>
using namespace std;
bool ispresent(int arr[],int n,int k)
{
    //base case
    if(n==1)
    {
        if(k==arr[0])
        {
            return true;
        }
        else {

            return false;
        }
    }
    //recursive case
    if(k==arr[0])
    {
        return true;
    }
       else
    {
        return ispresent(arr+1,n-1,k);
    }
}
int main()
{
    int arr[5]={1,2,3,4,5};
    int k=3;
    if(ispresent(arr,5,k))
    {
        cout<<"present";
    }
    else{
        cout<<"not present";
    }
}
