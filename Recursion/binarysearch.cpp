#include <iostream>
using namespace std;
bool isPresent(int arr[], int n ,int k)
{
    
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    //base case
    if(n==1)
    {
        if(k==arr[mid])
        {
            return true;
        }
        else{
            return false;
        }

    }
    //recursive case
    if(arr[mid]==k)
    {
        return true;
    }
    else if(arr[mid]>k)
    {
        return isPresent(arr,mid-1,k);
    }
    else{
        return isPresent(arr,mid+1,k);
        }
}
int main()
{
    int arr[5]={1,2,3,4,5};
    int k=1;
    cout<<isPresent(arr,5,k);
}
