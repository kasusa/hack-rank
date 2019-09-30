#include <bits/stdc++.h>

using namespace std;

// Complete the factorial function below.
int factorial(int n)
{
    int ans = 0;
    if(n > 1)
        ans  = n * factorial(n - 1);
    else if (n == 1)
        return 1;
    return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = factorial(n);
    cout <<"\nresult = "<< result<<endl;
    fout << result << "\n";
    fout.close();

    return 0;
}
