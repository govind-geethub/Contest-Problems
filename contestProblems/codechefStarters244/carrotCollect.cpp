#include <bits/stdc++.h>
using namespace std;

int carrotCollect(int n, int l, int r, vector<int> &v)
{
    int carrot = 0;
    
    // left side;
    int leftCarrot = 0;
    for(int i=1; i<l; i++) leftCarrot += v[i];
    carrot = max(carrot, leftCarrot);
    
    // right side
    int rightCarrot = 0;
    for(int i=r+1; i<=n; i++) rightCarrot += v[i];
    carrot = max(carrot, rightCarrot);
    
    return carrot;
}

int main() 
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int n,l,r;
        cin >> n >> l >> r;
        
        vector<int>v(n+1);
        for(int i=1; i<=n; i++) cin >> v[i];
        
        cout << carrotCollect(n,l,r,v) << endl;
    }
    
    return 0;
}
