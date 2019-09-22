# include<bits/stdc++.h>
using namespace std;
int main()
{
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    // Declare second integer, double, and String variables.
    int a;
    double b;
    string c = {0};
    // Read and save an integer, double, and String to your variables.
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    cin >> a;
    cin >> b;
    cin.ignore();
    getline(cin,c);
    // cout <<"\na:" << a<< " b:"<< b <<" c:" << c<<endl;
    // Print the sum of both integer variables on a new line.
    cout << a+i<< endl;
    // Print the sum of the double variables on a new line.
    printf("%0.1f\n",b+d);
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    cout << s+c;
    
    return 0;
}