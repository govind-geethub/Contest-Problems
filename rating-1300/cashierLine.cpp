#include<bits/stdc++.h>
using namespace std;

int computeTime(vector<int>&a)
{
    int total=0;
    for(int i=0; i<a.size(); i++) total+=a[i];
    total*=5;
    total+=(a.size()*15);
    return total;
}

int main()
{
    int n;
    cin >> n;

    vector<int>v(n);
    for(int i=0; i<n; i++) cin >> v[i];

    vector<vector<int>>mat(n);
    for(int i=0; i<n; i++)
    {
        mat[i].resize(v[i]);
        for(int j=0; j<v[i]; j++) cin >> mat[i][j];
    }

    int minTime=INT_MAX;
    for(int i=0; i<n; i++)
    {
        int time=computeTime(mat[i]);
        minTime=min(minTime, time);
    }

    cout << minTime << endl;
    return 0;
}