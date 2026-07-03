// upsolving A Bit Odd

#include<bits/stdc++.h>
using namespace std;
#define ll long long

// 2 conditions Alice needed to win
// if any of the 2 follows Alice wins
// else Bob wins
string aBitOdd(ll n, string s)
{
    ll count1 = 0;
    ll count0 = 0;
    bool flag = false;

    for(ll i=0; i<n; i++)
    {
        if(s[i] == '1') count1++;
        else
        {
            // for every 0 check count1 is odd or not
            if(count1 % 2) flag = true;
        }
    }

    for(ll i=n-1; i>=0; i--)
    {
        if(s[i] == '0') count0++;
        else
        {   
            // for every 1 count0 is odd or not
            if(count0 % 2) flag = true;
        }
    }

    if(flag) return "Alice";
    return "Bob";
}

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n;
        cin >> n;

        string s;
        cin >> s;

        cout << aBitOdd(n,s) << endl;
    }
    return 0;
}