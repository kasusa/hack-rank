#include <bits/stdc++.h>

using namespace std;
int count_consecutive(string base2num)
{
    base2num += "0";
    int biggest_ans = 0;
    int ans = 0;
    // bool stop = false;
    for (int i = 0; i < (int)base2num.length()-1;i++)
    {
        if(base2num[i] == '1')
        {
            ans ++ ;
            if(base2num[i+1] == '0')
            {
                if(biggest_ans < ans) biggest_ans = ans;
                ans = 0;
            }
        }
    }
    return biggest_ans;
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    //use a string to storage the converted 2 based number.
    string base2num ;
    int temp = n ;
    while (true)
    {
        if(temp > 1)
        {
            int remain = 0;
            remain = temp % 2 ;
            temp = temp / 2 ;
            base2num += to_string(remain);
        }
        if(temp == 1)
        {
            base2num += "1";
            break;
        }
    }
    //the base2num is actually reversed of the true base 2 number 
    //but in this case ,I don't need to convert back
    // cout << base2num<<endl;
    cout << count_consecutive(base2num)<<endl;
    return 0;
}
