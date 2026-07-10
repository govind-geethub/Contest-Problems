#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll watingTime(ll n, vector<ll> &v)
{
    ll wait = 0;
    ll curr = v[0];
    
    for(ll i=0; i<n; i++)
    {
        curr = max(curr, v[i]);
        wait += curr - v[i];
    }
    
    return wait;
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
        
        cout << watingTime(n,v) << endl;
    }
    return 0;
}
