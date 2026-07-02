#include <bits/stdc++.h>
using namespace std;

// place all the 0s first to have the lexicographically smallest
string tripleThreat(int n, int x)
{
    string ans(3*n, '0');   // empty string
    int rem = x;
    
    for(int i=0; i<n; i++)
    {
        int colsLeft = n - i - 1;
        
        // can this col be in the majority
        if(rem <= 3*colsLeft + 1)
        {
            if(rem > 0)
            {
                ans[i] = '1';
                rem--;
            }
        }
        
        else
        {
            if(rem - 2 <= 3*colsLeft)
            {
                ans[i] = '1';
                ans[i+n] = '1';
                rem -= 2;
            }
            
            else
            {
                ans[i] = '1';
                ans[i+n] = '1';
                ans[i + 2*n] = '1';
                rem -= 3;
            }
        }
    }
    
    return ans;
}

int main() 
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int n,x;
        cin >> n >> x;
        
        cout << tripleThreat(n,x) << endl;
    }
    
    return 0;
}
