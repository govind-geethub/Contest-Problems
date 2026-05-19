// upsolve 
// codechef starters 238

#include<bits/stdc++.h>
using namespace std;

int func(vector<int>&v, int l, int r)
{
    if((r-l+1) == 1) return v[l];
    if((r-l+1) % 2 == 0)
    {
        return max(v[l + ((r-l)/2)], v[l + ((r-l)/2) + 1]);
    }
    
    else
    {   
        int mid=(r+l)/2;
        return max(min(v[mid-1], v[mid]), min(v[mid], v[mid+1]));
    }
}

void minMaxQuery(vector<int>&v, int a, int b, int c)
{
    if(a==1) v[b]=c;
    
    else 
    {
        cout << func(v,b,c) << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int n,q;
        cin >> n >> q;
            
        vector<int>v(n+1);
        for(int i=1; i<=n; i++) cin >> v[i];
        
        
        while(q--)
        {
            int a,b,c;
            cin >> a >> b >> c;
            
            minMaxQuery(v,a,b,c);
        }
    }
    
    return 0;
}