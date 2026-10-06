#include<bits/stdc++.h>
using namespace std;

int nextTest(int n, vector<int> &v)
{   
    sort(v.begin(), v.end());
    if(v[0] != 1) return 1;
    for(int i=0; i<v.size()-1; i++)
    {
        if(v[i] + 1 != v[i+1]) return v[i] + 1;
    }
    return v[v.size() - 1] + 1;
}

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i];

    cout << nextTest(n,v) << endl;
    return 0;
}