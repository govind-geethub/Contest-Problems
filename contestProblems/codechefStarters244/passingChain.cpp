#include <bits/stdc++.h>
using namespace std;

int passingChain(int n, int k)
{
    int ind = 1;
    
    while(ind <= n)
    {
        if(ind+k > n) break;
        ind += k;
    }
    
    return ind;
}

int main() 
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        
        cout << passingChain(n,k) << endl;
    }
    return 0;
}

