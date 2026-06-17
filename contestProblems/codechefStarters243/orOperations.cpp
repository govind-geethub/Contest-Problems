#include<bits/stdc++.h>
using namespace std;

int orOperation(int n, vector<int> &v)
{
    int res = 0;
    for(int i=0; i<n; i++) res |= v[i];
    
    int ans = 0, part = 0;
    for(int i=0; i<n; i++)
    {
        ans |= v[i];
        if(ans == res)
        {
            part++;
            ans = 0;
        }
    }
    
    return (n - part);
}

int main()
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int n;
        cin >> n;
        
        vector<int>v(n);
        for(int i=0; i<n; i++) cin >> v[i];
        
        cout << orOperation(n,v) << endl;
    }
    
    return 0;
}