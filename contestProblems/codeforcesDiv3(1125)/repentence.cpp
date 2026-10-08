#include<bits/stdc++.h>
using namespace std;
#define ll long long

// two ways to do
// 1. take a[i] -> b[i] -> a[i+1] then new sub part forms
// 2. take diagonal path so all diagonals + 1 vertical edge at a[n-1] -> b[n-1]
ll repentence(ll n, vector<ll> &a, vector<ll> &b)
{
    vector<ll> dp(n);

    // vertical edge
    ll curr = 1 + (a[n-1] == b[n-1]);
    dp[n-1] = curr;

    for(ll i=n-2; i>=0; i--)
    {
        curr += 1 + (a[i] == b[i+1]);
        curr += 1 + (a[i+1] == b[i]);
        dp[i] = max(curr, 1 + (a[i] == b[i]) + 1 + (b[i] == a[i+1]) + dp[i+1]);
    }
    return dp[0];
}

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n;
        cin >> n;

        vector<ll> a(n), b(n);
        for(ll i=0; i<n; i++) cin >> a[i];
        for(ll i=0; i<n; i++) cin >> b[i];

        cout << repentence(n,a,b) << endl;
    }
    return 0;
}