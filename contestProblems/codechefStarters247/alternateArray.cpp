#include <bits/stdc++.h>
using namespace std;

int alternatArr(int n, vector<int> &v)
{
    int count = 0;
    
    // odd, even, odd
    for(int i=0; i<n; i++)
    {
        if(i % 2 == 0 && v[i] % 2 == 1) continue;
        else if(i % 2 == 1 && v[i] % 2 == 0) continue;
        count++;
    }
    
    // even, odd, even
    int count1 = 0;
    for(int i=0; i<n; i++)
    {
        if(i % 2 == 0 && v[i] % 2 == 0) continue;
        else if(i % 2 == 1 && v[i] % 2 == 1) continue;
        count1++;
    }
    
    return min(count1, count);
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
        
        cout << alternatArr(n,v) << endl;
    }
}
