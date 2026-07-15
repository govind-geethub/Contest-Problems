#include<bits/stdc++.h>
using namespace std;
#define ll long long

class DSU
{
    vector<ll> rank;
    vector<ll> parent;

    public:
    DSU(ll n)
    {
        rank.resize(n+1,0);
        parent.resize(n+1);

        for(ll i=1; i<=n; i++) parent[i] = i;
    }

    ll find(ll x)
    {
        if(parent[x] != x) parent[x] = find(parent[x]);
        return parent[x];
    }

    void unionByRank(ll a, ll b)
    {
        ll parentA = find(a);
        ll parentB = find(b);

        if(parentA == parentB) return;
        
        if(rank[parentA] > rank[parentB]) parent[parentB] = parentA;
        else if(rank[parentA] < rank[parentB]) parent[parentA] = parentB;
        else
        {
            parent[parentB] = parentA;
            rank[parentA]++;
        }
    }
};

string stpanPermute(ll n, ll x, ll y, vector<ll> &v)
{
    DSU dsu(n);

    for(ll i=1; i+x <= n; i++) dsu.unionByRank(i, i+x);
    for(ll i=1; i+y <= n; i++) dsu.unionByRank(i, i+y);

    vector<vector<ll>> positions(n+1);
    vector<vector<ll>> values(n+1);

    // pos & vals into resp. components
    for(ll i=1; i<=n; i++)
    {
        ll root = dsu.find(i);
        positions[root].push_back(i);
        values[root].push_back(v[i]);
    }

    bool flag = true;
    for(ll i=1; i<=n; i++)
    {
        if(positions[i].size() == 0) continue;

        sort(positions[i].begin(), positions[i].end());
        sort(values[i].begin(), values[i].end());

        if(positions[i] != values[i])
        {
            flag = false;
            break;
        }
    }

    if(flag == false) return "NO";
    return "YES";
}

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n,x,y;
        cin >> n >> x >> y;

        vector<ll> v(n+1);
        for(ll i=1; i<=n; i++) cin >> v[i];

        cout << stpanPermute(n,x,y,v) << endl;
    }
    return 0;
}