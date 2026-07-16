#include <bits/stdc++.h>
using namespace std;
#define ll long long

string fairFlipping(ll n, ll k, string s)
{
    // count 0s 1s
    ll zeros = 0, ones = 0;
    for(ll i=0; i<n; i++)
    {
        if(s[i] == '0') zeros++;
        else ones++;
    }
    
    if(zeros < k || ones < k) return s;
    
    else if(2*k == n)
    {
        string p = s;
        for(ll i=0; i<n; i++)
        {
            if(s[i] == '0') p[i] = '1';
            else p[i] = '0';
        }
        
        return min(s,p);
    }
    
    return string(zeros, '0') + string(ones, '1');
}

int main() 
{
    ll t;
    cin >> t;
    
    while(t--)
    {
        ll n,k;
        cin >> n >> k;
        
        string s;
        cin >> s;
        
        cout << fairFlipping(n,k,s) << endl;
    }
}
