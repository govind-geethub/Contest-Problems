#include<bits/stdc++.h>
using namespace std;
#define ll long long

string nikitaBooks(ll n, vector<ll> &v)
{
    // calc prefix sum
    // at any point is sum < need return no
    // need = i * (i+1) / 2;

    ll sum = 0;
    for(ll i=0; i<n; i++)
    {
        sum += v[i];

        ll need = (ll) (i+1);
        need = need * (ll)(i+2);
        need = need / 2;

        if(sum < need) return "NO";
    }
    return "YES";
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

        cout << nikitaBooks(n,v) << endl;
    }
    return 0;
}