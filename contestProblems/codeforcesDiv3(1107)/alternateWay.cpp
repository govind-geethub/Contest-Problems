#include<bits/stdc++.h>
using namespace std;
#define ll long long

string alternateWay(ll n, vector<ll> &a, vector<ll> &b)
{
    bool flag = true;
    for(ll i=0; i<n; i++)
    {
        if(a[i] != b[i])
        {
            flag = false;
            break;
        }
    }
    if(flag) return "YES";


    ll prefixSum = 0;
    flag = true;
    for(ll i=0; i<n; i++)
    {
        prefixSum += (b[i] - a[i]);
        if(prefixSum < 0) flag = false;
    }

    if(flag) return "YES";
    return "NO";
}

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n;
        cin >> n;

        vector<ll> a(n);
        for(ll i=0; i<n; i++) cin >> a[i];

        vector<ll> b(n);
        for(ll i=0; i<n; i++) cin >> b[i];

        cout << alternateWay(n,a,b) << endl;
    }
    return 0;
}