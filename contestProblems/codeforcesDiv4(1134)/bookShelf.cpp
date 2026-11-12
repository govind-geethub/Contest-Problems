#include<bits/stdc++.h>
using namespace std;
#define ll long long

void bookShelf(ll n, vector<ll> &v)
{
    sort(v.begin(), v.end());
    vector<ll> ans(n);

    ll dist = 0, extra = 0, two = 0;
    for(ll i=0; i<n; i++)
    {
        ll j = i;
        while(j < n && v[j] == v[i]) j++;
        ll cnt = j-i;
        dist++;

        if(cnt >= 2) two++;
        if(cnt > 2) extra += (cnt-2);

        i = j - 1;
    }

    ll l = dist - 1;
    ll r = dist + extra;
    ll mid = dist;

    for(ll i = n - 1; i >= 0; )
    {
        ll temp = v[i];
        ll cnt = 0;

        while(i >= 0 && v[i] == temp)
        {
            cnt++;
            i--;
        }

        for(ll k = 2; k < cnt; k++)  ans[mid++] = temp;
        ans[l--] = temp;
        if(cnt >= 2) ans[r++] = temp;
    }

    cout << dist + two << endl;
    for(ll x : ans) cout << x << " ";
    cout << endl;
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        vector<ll> v(n);
        for(int i=0; i<n; i++) cin >> v[i];

        bookShelf(n,v);
    }
    return 0;
}