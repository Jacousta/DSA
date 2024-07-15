#include <iostream>
using namespace std;
string reversel(string s)
{
    //base case
    if (s.length() == 1)
    {
        return s;
    }
    //recursive case
    string ans = reversel(s.substr(1))+s[0];
    return ans;
}
int main()
{
    string s="abcdefgi";
    cout<<reversel(s);
}
