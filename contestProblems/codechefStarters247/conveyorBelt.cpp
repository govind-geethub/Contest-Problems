#include <bits/stdc++.h>
using namespace std;

int conveyorBelt(int n, int p, string s)
{
    int rightFlip = 0;
    
    for(int i=p-1; i<n; i++)
    {
        if(s[i] == 'L') rightFlip++;
    }
    
    int leftFlip = 0;
    for(int i=0; i<p; i++)
    {
        if(s[i] == 'R') leftFlip++;
    }
    
    return min(rightFlip, leftFlip);
}

int main() 
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int n,p;
        cin >> n >> p;
        
        string s;
        cin >> s;
        
        cout << conveyorBelt(n,p,s) << endl;
    }
}
