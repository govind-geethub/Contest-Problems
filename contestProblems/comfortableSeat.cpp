// codechef starters 240
#include<bits/stdc++.h>
using namespace std;

string comfortableSeat(int n, vector<int>&v)
{
    int mini=*min_element(v.begin(), v.end());
    int count=0;
    for(int i=0; i<n; i++)
    {
        if(v[i]==mini) count++;
    }

    if(count>=2) return "YES";
    return "NO";
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

        cout << comfortableSeat(n,v) << endl;
    }

    return 0;
}