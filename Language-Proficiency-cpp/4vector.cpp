#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n , q ,k;
    cin >> n >> q ;
    vector < int > a [n];
    // cout << "vector < int > a [0] max_size"<<a[0].max_size();
    int I[q] = {0}, J[q] = {0};
    //input
    for(int i = 0 ; i<n;i++)
    {
        cin >> k;
        for (int j = 0 ; j < k ; j ++)
        {
            int temp;
            cin >> temp;
            // cout << " i:" << i << " j:" << j <<" pushing"<<endl;
            a[i].push_back(temp);
        // cout << " i:" << i <<" j:"<<j<<" pushed"<<"\n\n";
        }
    }
    for(int i = 0 ; i <q;i++)
    {
        cin >> I[i] >>J[i];
    }
    for (int i = 0; i < q; i++)
    {
        cout << a[I[i]].at(J[i]);
        cout << "\n";
    }
        return 0;
}
