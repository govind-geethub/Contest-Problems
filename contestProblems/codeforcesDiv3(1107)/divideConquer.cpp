#include<bits/stdc++.h>
using namespace std;
#define ll long long

string divideConquer(int x, int y)
{
    if(x < y) return "NO";
    if(x % y == 0) return "YES";
    return "NO";
}

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        int x,y;
        cin >> x >> y;

        cout << divideConquer(x,y) << endl;
    }

    return 0;
}