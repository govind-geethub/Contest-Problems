#include<bits/stdc++.h>
using namespace std;

int stubbornPen(int n, string s)
{
    char ch = 'R';
    int change = 0;
    for(char c : s)
    {
        if(c != ch) 
        {
            change++;
            ch = c;
        }
        if(ch == 'R') ch = 'B';
        else if(ch == 'B') ch = 'R';
    }
    return change;
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        cout << stubbornPen(n,s) << endl;
    }
    return 0;
}