#include <iostream>
using namespace std;
int factorial(int n)
{
    //base case
    if(n==0)
    {
        return 1;
    }
    //recursive case
    int smallans=factorial(n-1);
    return n*smallans;
}
int main()
{
    int n;
    cout<<"Enter the number whose factorial you want"<<endl;
    cin>>n;
    int ans=factorial(n);
    cout<<"Factorial is : "<<ans;
}
