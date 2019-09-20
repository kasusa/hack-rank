#include <bits/stdc++.h>
using namespace std;

int main()
{
   int N;
   cin >> N;
   int a[N] = {0};
   for ( int i = 0 ; i < N ; i++)
   {
       cin >> a[i] ;
   }
//    for (int i = 0; i < N; i++)
//    {
//        cout << a[i] << " ";
//    }
      for (int i = N-1; i >= 0; i--)
      {
          cout << a[i] << " ";
      }
   return 0;
}
