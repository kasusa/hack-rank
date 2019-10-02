#include <bits/stdc++.h>
using namespace std;

int calHourGlass(vector<vector<int>> arr ,int i,int j)
{
    int ans = 0;
    ans += arr[i][j] + arr[i][j+1] + arr[i][j+2];
    ans +=             arr[i+1][j+1];
    ans += arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2];
    return ans;
}
int main()
{
    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++)
    {
        arr[i].resize(6);
        for (int j = 0; j < 6; j++)
        {
            cin >> arr[i][j];
        }
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    int biggest = INT_MIN;
    for(int i = 0 ; i < 4 ; i ++)
    {
        for(int j = 0 ; j < 4 ; j ++)
        {
            int temp = calHourGlass(arr,i,j);
            if(biggest < temp)biggest = temp;
        }
    }
    cout << biggest <<endl;

    return 0;
}
