#include <bits/stdc++.h>
using namespace std;

string equivalentExchange(int n, int k, vector<int> &v)
{
    int prefixSum = 0;
    int l = 0, r = k;
    
    for(int i=0; i<n; i++)
    {
        prefixSum += v[i];
        l = max(l, -prefixSum);
        r = min(r, k - prefixSum);
    }
    
    if(l <= r) return "Yes";
    return "No";
}

int main() 
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        
        vector<int> v(n);
        for(int i=0; i<n; i++) cin >> v[i];
        
        cout << equivalentExchange(n,k,v) << endl;
    }
    
    return 0;
}
