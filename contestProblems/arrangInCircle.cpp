// upsolve 
/// codeforces div 2

#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll arrangeInCircle(ll n, vector<ll>&v)
{
    ll ans=0;
    sort(v.begin(), v.end(), greater<ll>());

    // extras to calculate with v[i]>=2
    ll ex=0;
    bool exx=false; // speacial case where only one v[i]>=2

    if(n>1 && v[0]>=2 && v[1]==1) exx=true; // special case exist
    for(ll i=0; i<n; i++)
    {
        if(v[i]==1)
        {
            if(ex>0)
            {
                ex--;
                ans++;
            }

            else if(exx)
            {
                exx=false;
                ans++;
            }
        }

        else
        {
            ans+=v[i];
            if(v[i]<4) continue;
            ex += (1+(v[i]-4)/2);
        }
    }

    if(ans<3) return 0;
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

        vector<ll>v(n);
        for(ll i=0; i<n; i++) cin >> v[i];

        cout << arrangeInCircle(n,v) << endl;
    }
    return 0;
}