#include<bits/stdc++.h>
using namespace std;

string threePiles(int a, int b, int c)
{
    if((a+b+c) % 3 == 0 && b-a == 1 && c-b == 1) return "YES";
    return "NO";
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        cout << threePiles(a,b,c) << endl;
    }
    return 0;
}