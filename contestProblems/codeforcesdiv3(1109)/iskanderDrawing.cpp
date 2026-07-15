#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll iskanderDrawing(ll n, string s)
{
    bool flag = false;
    for(int i=0; i<n; i++)
    {
        if(s[i] == '#')
        {
            flag = true;
            break;
        }
    }

    if(flag == false) return 0;

    ll time = 0;
    ll maxTime = 0;
    for(ll i=0; i<n; i++)
    {
        if(s[i] == '#')
        {
            time++;
            maxTime = max(maxTime, time);
        }
        else time = 0;
    }

    return (maxTime + 1)/2;
}

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n;
        cin >> n;

        string s;
        cin >> s;

        cout << iskanderDrawing(n,s) << endl;
    }
    return 0;
}