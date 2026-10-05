#include<bits/stdc++.h>
using namespace std;

int expression(int a, int b, int c)
{
    int ans = a+b+c;
    ans = max(ans, a*(b+c));
    ans = max(ans, (a+b)*c);
    ans = max(ans, a*b*c);
    return ans;
}

int main()
{
    int a,b,c;
    cin >> a >> b >> c;

    cout << expression(a,b,c) << endl;
    return 0;
}