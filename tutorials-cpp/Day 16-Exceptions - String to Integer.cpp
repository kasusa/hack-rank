#include <bits/stdc++.h>
using namespace std;
void CoolOrNot(string s)
{
    try
    {
        int n = stoi(s);
        cout << n ;
    }
    catch(exception e)
    {
        cout << "Bad String" ;
    }
}
int main()
{
    string S;
    cin >> S;
    CoolOrNot(S);
    return 0;
}