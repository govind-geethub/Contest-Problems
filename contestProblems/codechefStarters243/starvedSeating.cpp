#include<bits/stdc++.h>
using namespace std;

int starvedSeating(int n, int k, vector<int> &v)
{
    int match = 0;
    
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(i == j) continue;
            
            int seats = v[i] + v[j];
            for(int k=0; k<n; k++)
            {
                if(k != i && k!= j) seats += (v[k]/2);
            }
            
            if(seats > k) match++;
        }
    }
    return match;
}

int main()
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        
        vector<int>v(n);
        for(int i=0; i<n; i++) cin >> v[i];
        
        cout << starvedSeating(n,k,v) << endl;
    }
    
    return 0;
}