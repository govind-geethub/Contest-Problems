#include<bits/stdc++.h>
using namespace std;

int timeLimit(int n, int m, vector<int> &a, vector<int> &b)
{
    int ans = 0;
    for(int i=0; i<n; i++) ans = max(ans, a[i]);

    int mini = *min_element(a.begin(), a.end());
    ans = max(ans, mini*2);

    int mini1 = *min_element(b.begin(), b.end());
    if(ans >= mini1) return -1;
    return ans;
}

int main()
{
    int n,m;
    cin >> n >> m;

    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];

    vector<int> b(m);
    for(int i=0; i<m; i++) cin >> b[i];

    cout << timeLimit(n,m,a,b) << endl;
    return 0;
}