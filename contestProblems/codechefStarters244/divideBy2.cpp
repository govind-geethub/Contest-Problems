#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll divideBy2(ll n, vector<ll> &v)
{
    unordered_map<ll,ll> freq;
    unordered_map<ll,ll> costSum;
    
    for(int i=0; i<n; i++)
    {
        int steps = 0;
        while(true)
        {
            freq[v[i]]++;
            costSum[v[i]]+=steps;
            
            if(v[i] == 0) break;
            v[i] = v[i]/2;
            steps++;
        }
    }
    
    ll ans = LLONG_MAX;
    for(auto &it : freq)
    {
        ll val = it.first;
        ll count = it.second;
        
        if(count == n) ans = min(ans, costSum[val]);
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
        
        cout << divideBy2(n,v) << endl;
    }
}
