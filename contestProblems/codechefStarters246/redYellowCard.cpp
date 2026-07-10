#include <bits/stdc++.h>
using namespace std;

int redYellowCard(int r, int y)
{
    int extra = max(0, y - (r + 1));
    return r + (extra + 1) / 2;
}

int main() 
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int red, yellow;
        cin >> red >> yellow;
        
        cout << redYellowCard(red, yellow) << endl;
    }
    return 0;
}
