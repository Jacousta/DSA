#include <iostream>
using namespace std;
bool isSorted(int arr[],int n)
{
    //base case
    if(n==1)
    {
        return true;
    }
    //recursive case
    else if(arr[0]<arr[1])
    {
        return isSorted(arr+1,n-1);
    }
    else
    {
        return false;
    }
}
int main()
{
    int arr[5]={2,1,3,4,5};
    cout<<"Given array:"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    if(isSorted(arr,5))
    {
        cout<<"Array is Sorted";
    }
    else
    {
        cout<<"Array is not Sorted";
    }
}
