// codechef starters 240
#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll partition(ll n, vector<ll>&v)
{
    ll freq=0;
    
    unordered_map<ll,ll>mpp;
    for(int i=0; i<n; i++)
    {
        mpp[v[i]]++;
        freq=max(freq, mpp[v[i]]);
    }
    
    return n-freq+1;
}

int main()
{
    ll t;
    cin >> t;
    
    while(t--)
    {
        ll n;
        cin >> n;
        
        vector<ll>v(n);
        for(ll i=0; i<n; i++) cin >> v[i];
        
        cout << partition(n,v) << endl;
    }
    
    return 0;
}