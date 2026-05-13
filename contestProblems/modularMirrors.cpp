// codechef starters 238
#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll>modularMap(ll n, ll m)
{
    if(n%3!=2) return {-1};
    
    vector<ll>ans(n);
    for(ll i=0; i<n; i++)
    {
        int pos=(i+1)%6;
        
        if(pos==1 || pos==2) ans[i]=1;
        else if(pos==4 || pos==5) ans[i]=m-1;
        else ans[i]=0;
    }
    
    return ans;
}

int main()
{
    ll t;
    cin >> t;
    
    while(t--)
    {
        ll n,m;
        cin >> n >> m;
        
        vector<ll> ans=modularMap(n,m);
        
        if(ans.size()==1 && ans[0]==-1) cout << -1 << endl;
        else
        {
            for(ll i=0; i<ans.size(); i++) cout << ans[i] << " ";
            cout << endl;
        }
    }
    
    return 0;
}