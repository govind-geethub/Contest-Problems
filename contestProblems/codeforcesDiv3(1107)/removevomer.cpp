#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll RemovevomeR(ll n, string s)
{
    ll chunk = 1;
    for(ll i=1; i<n; i++)
    {
        if(s[i] != s[i-1]) chunk++;
    }

    if(chunk == 1 || chunk == 2) return chunk;
    return 1; 
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

        cout << RemovevomeR(n,s) << endl;
    }

    return 0;
}