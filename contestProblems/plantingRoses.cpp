// upsolve
// codechef starters 239

#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll plantingRose(ll n, ll m, ll k, vector<ll>&v)
{
    ll tot=0, res=0;
    multiset<ll>remain;
    
    for(ll i=0; i<n; i++)
    {
        tot+=v[i]/k;
        remain.insert(v[i]%k);
    }
    
    // if m is greater fill all the chunks(tot) then fill the remain fromt he multiset
    if(m > tot*(k+1))
    {
        m-=tot*(k+1);
        res+=tot*k;
        
        while(m>0 && !remain.empty())
        {
            ll t=*remain.rbegin();
            if(t>m)
            {
                res+=m;
                m-=t;
            }
            
            else
            {
                m-=(t+1);
                res+=t;
            }
            remain.erase(--remain.end());
        }
    }
    
    // m<t so fill according to m
    else    res = (m/(k+1))*k + (m%(k+1));
    
    return res;
}

int main()
{
    ll t;
    cin >> t;
    
    while(t--)
    {
        ll n,m,k;
        cin >> n >> m >> k;
        
        vector<ll>v(n);
        for(ll i=0; i<n; i++) cin >> v[i];
        
        cout << plantingRose(n,m,k,v) << endl;
    }
    
    return 0;
}