#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll yaroslavProductivity(ll n, ll m, vector<ll> &p, vector<ll> &motivate)
{
    // sorted so that segments can be divided
    sort(motivate.begin(), motivate.end());
    vector<ll> pref(n+1, 0);

    // prefix sum
    for(ll i=1; i<=n; i++) pref[i] = pref[i-1] + p[i];

    ll ans = 0;
    ll prev = 0;

    for(ll pos : motivate)
    {
        //sum(l, r) = prev[r] - prev[l]
        ll segmentSum = pref[pos] - pref[prev];
        
        // we choose or not so abo=solute value
        ans += abs(segmentSum);
        
        // prev always updates
        prev = pos;
    }

    ans += pref[n] - pref[prev];
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

        vector<ll> p(n+1);
        for(ll i=1; i<=n; i++) cin >> p[i];

        vector<ll> motivate(m);
        for(ll i=0; i<m; i++) cin >> motivate[i];

        cout << yaroslavProductivity(n,m,p,motivate) << endl;
    }
    return 0;
}