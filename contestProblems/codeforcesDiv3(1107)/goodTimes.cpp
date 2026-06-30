#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll goodTimes(ll x)
{
    string s = to_string(x);
    ll len = s.length();
    len = len-1;

    string ans = "1";
    while(len--) ans += '0';
    ans += '1';

    ll num = stoll(ans);
    return num;
}

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll x;
        cin >> x;

        cout << goodTimes(x) << endl;
    }

    return 0;
}