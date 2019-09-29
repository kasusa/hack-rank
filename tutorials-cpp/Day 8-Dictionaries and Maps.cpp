#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 0;
    cin >> n;
    map <string,string> phoneBook ;
    for (int i = 0 ;i < n; i++)
    {
        string name , tel;
        cin >> name;
        cin >> tel;
        phoneBook[name] = tel;
    }
    string Query;
    cin.ignore();
    while (getline(cin, Query))
    {
        if(Query == "")break;
       if(phoneBook[Query] != "")
       {
           cout << Query << "=" << phoneBook[Query]<<endl;
       }
       else
           cout << "Not found"<<endl;
    }
    return 0;
}