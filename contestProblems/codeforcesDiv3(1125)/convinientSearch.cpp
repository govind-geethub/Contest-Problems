#include<bits/stdc++.h>
using namespace std;

void convinientSearch(int x, int y, int r)
{
    int ans = INT_MIN;
    int a, b;

    for(int i=x-r; i<=x+r; i++)
    {
        for(int j=y-r; j<=y+r; j++)
        {
            int x0 = (x - i)*(x - i);
            int y0 = (y - j)*(y - j);

            if(x0 + y0 == r*r) 
            {
                cout << i << " " << j << endl;
                return;
            }
        }
    }
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int x,y,r;
        cin >> x >> y >> r;
        convinientSearch(x,y,r);
    }
    return 0;
}