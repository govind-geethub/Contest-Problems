// codechef starters 238
#include <bits/stdc++.h>
using namespace std;

int wecRec(int n, int x, int k, vector<int>&v)
{
    unordered_set<int>st;
    for(int i=0; i<n; i++) st.insert(v[i]);
    
    unordered_map<int,int>mpp;
    for(int i=0; i<n; i++) mpp[v[i]]++;
    
    vector<int>temp(st.begin(), st.end());
    sort(temp.begin(), temp.end(), greater<int>());
    
    int count=0;
    for(int i=0; i<k; i++)
    {
        if(count<x)
        {
            count+=mpp[temp[i]];
        }
    }
    
    if(count>x) count-=(count-x);
    return count;
}

int main()
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int n,x,k;
        cin >> n >> x >> k;
        
        vector<int>v(n);
        for(int i=0; i<n; i++) cin >> v[i];
        
        cout << wecRec(n,x,k,v) << endl;
    }
    
    return 0;
}
