#include<bits/stdc++.h>
using namespace std;

int lossLess(int m, int n)
{
    int loss = INT_MAX;
    
    if(m == n) return 0;
    
    else if(m < n) 
    {
        int match = 0;
        while(n > m)
        {
            n = n-3;
            match++;
            m--;
        }
        
        if(m == n) return 0;
        else loss = min(loss, (m-n));
    }
    
    else loss = min(loss, (m-n));
    return loss;
}

int main()
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int m, n;
        cin >> m >> n;
        
        cout << lossLess(m,n) << endl;
    }
    
    return 0;
}