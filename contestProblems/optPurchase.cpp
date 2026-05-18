// edu codeforces div2
#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll optPurchase(ll n, ll a, ll b)
{
    ll num=n/3;
    ll cost=min(num*b, num*3*a);

    ll rem=n%3;
    cost+=min(rem*a, b);

    return cost;
}

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n,a,b;
        cin >> n >> a >> b;

        cout << optPurchase(n,a,b) << endl;
    }
    return 0;
}