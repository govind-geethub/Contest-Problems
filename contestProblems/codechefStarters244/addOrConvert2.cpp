#include <bits/stdc++.h>
using namespace std;
#define mod 998244353
#define ll long long

// mod tmeplate
ll add(ll a, ll b) { return ((a % mod) + (b % mod) + mod) % mod; }
ll sub(ll a, ll b) { return ((a % mod) - (b % mod) + mod) % mod; }
ll mul(ll a, ll b) { return ((a % mod) * (b % mod)) % mod; }

// exponent
ll modExp(ll a, ll e)
{
    a = a % mod; ll res = 1;
    while(e)
    {
        if(e & 1) res = mul(res,a);
        a = mul(a,a);
        e = e >> 1;
    }
    return res;
}

// inverse
ll inv(ll a) { return modExp(a, mod-2); }

ll addOrConvert2(ll n, string a)
{
    // stars and bars method
    // k chunks and total x1 + ... + xk = n
    int k=1;
    for(int i=1; i<n; i++)
    {
        if(a[i] != a[i-1]) k++;
    }
    if(k == 1) return 1;
    
    // dividing into subChunks eg 1010
    // 1010, 101, 010, 10, 01, 1, 0
    // except the full everyone has 2 chunks each of same size 
    
    // (n-1 C k-1) + 2 * (n-1 C i-1)
    ll ans = 2, fact = 1;    // n=2 base case
    for(int deno = 1, num = n-1; deno < k; deno++, num--)
    {
        fact = mul(fact,num);
        fact = mul(fact, inv(deno));
        
        if(deno == k-1) ans = add(ans,fact);
        else ans = add(ans, mul(fact,2));
    }
    
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
        
        string a;
        cin >> a;
        
        cout << addOrConvert2(n,a) << endl;
    }
    
    return 0;
}
