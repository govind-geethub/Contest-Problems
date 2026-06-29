#include<bits/stdc++.h>
using namespace std;

int papyrusPuzzle(int n, vector<int> &a, vector<int> &b, int c)
{
    int minTime = INT_MAX;

    int time = 0;
    bool flag = true;
    for(int i=0; i<n; i++)
    {
        if(a[i] < b[i])
        {
            flag = false;
            break;
        }
        time += a[i] - b[i];
    }

    if(flag) minTime = min(minTime, time);

    // reorder
    int cost = c;
    flag = true;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    for(int i=0; i<n; i++)
    {
        if(a[i] < b[i])
        {
            flag = false;
            break;
        }
        cost += a[i]-b[i];
    }

    if(flag) minTime = min(minTime, cost);
    if(minTime == INT_MAX) return -1;
    return minTime;
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n,c;
        cin >> n >> c;

        vector<int> a(n);
        for(int i=0; i<n; i++) cin >> a[i];

        vector<int> b(n);
        for(int i=0; i<n; i++) cin >> b[i];

        cout << papyrusPuzzle(n,a,b,c) << endl;
    }
    return 0;
}