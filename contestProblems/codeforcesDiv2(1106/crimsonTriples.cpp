#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll crimsonTriples(int n)
{
    ll res = 0;
    for(int i=1; i<=n; i++)
    {
        ll m = n/i;
        res += m*m;
    }

    return res;
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        cout << crimsonTriples(n) << endl;
    }
    return 0;
}