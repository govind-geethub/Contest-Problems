#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll unrequitedLove(ll n, vector<ll> &v)
{
    vector<ll> val(n);
    for(ll i=0; i<n-4; i++) val[i] = v[i] + v[i+2] - v[i+4];

    unordered_map<ll,ll> freq;
    for(ll i=0; i<n-4; i++) freq[val[i]]++;

    ll ans = 0;

    // count nC2 pairs
    for(auto it : freq) ans += (it.second)*(it.second - 1) / 2;

    // overlaps
    for(ll i=0; i<n-4; i++)
    {
        if(i+2 < n-4 && val[i] == val[i+2]) ans--;
        if(i+4 < n-4 && val[i] == val[i+4]) ans--;
    }
    return ans;
}

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n;
        cin >> n;

        vector<ll> v(n);
        for(ll i=0; i<n; i++) cin >> v[i];

        cout << unrequitedLove(n,v) << endl;
    }
    return 0;
}