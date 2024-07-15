#include <iostream>
using namespace std;
bool check(string s, int i, int j)
{
    // base case
    if (i > j)
    {
        return true;
    }
    // recursive case
    if (s[i] != s[j])
    {
        return false;
    }
    else
    {
        return check(s, i + 1, j - 1);
    }
}
int main()
{
    string s = "aabaa";
    cout << check(s, 0, s.length() - 1);
}
