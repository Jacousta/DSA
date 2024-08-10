#include <iostream>
#include<vector>
using namespace std;
vector<char>getSTR(string s)
{
    int n=s.length();
    int i=0;
    int count;
    vector<char>k;
    char num=s[i];
    while(i<n)
    {
    if(num!=s[i+1])
    {
        i++;
        k.push_back(s[i]);
    }
    else{
        k.clear();
        num=s[i];
        i--;
    }
    }
    return k;
}
int main()
{
    string s="abacaba";
    getSTR(s);
}
