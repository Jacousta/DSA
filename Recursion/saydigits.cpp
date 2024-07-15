#include <iostream>
using namespace std;
void sayDigits(int n, string arr[])
{
    //base case
    if (n == 0)
    {
        return;
    }
    int digit=n%10;
    int number=n/10;
    sayDigits(number,arr);
    cout<<arr[digit]<<" ";

}
int main()
{
    int n=31;
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    sayDigits(n,arr);
}
