// codechef starters 238
#include <bits/stdc++.h>
using namespace std;

int cricketNets(int n)
{
    int cost=0;
    
    if(n>=20) 
    {
        cost+=(10*20);
        n=n-20;
        
        int cost1=(n*5);
        cost1/=2;
        
        cost+=cost1;
    }
    
    else cost+=(n*10);
    return cost;
}

int main()
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int n;
        cin >> n;
        
        cout << cricketNets(n) << endl;
    }
    
    return 0;
}