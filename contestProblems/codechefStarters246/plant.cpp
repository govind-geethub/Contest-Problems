#include <bits/stdc++.h>
using namespace std;

int plant(int n, vector<int> &v)
{
    int ans = 0;
    for(int i=0; i<n-1; i++)
    {
        ans = max(ans, min(v[i], v[i+1]));
    }
    return ans;
}

int main() 
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int n;
        cin >> n;
        
        vector<int> v(n);
        for(int i=0; i<n; i++) cin >> v[i];
        
        cout << plant(n,v) << endl;
    }
    return 0;
}
