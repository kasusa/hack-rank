#include <bits/stdc++.h>
using namespace std;
// Complete the solve function below.
int main()
{
    int n = 0;
    cin >> n;
    cin.ignore();
    for(int i = 0 ; i < n ; i++)
    {
        string tempString;
        getline(cin,tempString);
        //cin >> tempString;
        int strSize = tempString.size();
        for(int i = 0 ; i < strSize ; i += 2)
        {
            cout << tempString[i];
        }
        cout << " ";
        for (int i = 1; i < strSize; i += 2)
        {
            cout << tempString[i];
        }
        cout << endl;
    }
    return 0;
}
