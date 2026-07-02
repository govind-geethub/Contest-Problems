#include <bits/stdc++.h>
using namespace std;

int cooling(int x, int y)
{
    int time = 0;
    while(x > y)
    {
        int val = x/10;
        if(val*10 == x) time += val;
        else time += (val+1);
        x--;
    }
    return time;
}

int main() 
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int x, y;
        cin >> x >> y;
        
        cout << cooling(x,y) << endl;
    }
    return 0;
}
