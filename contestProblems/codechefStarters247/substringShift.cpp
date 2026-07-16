#include <bits/stdc++.h>
using namespace std;

string substringShift(int n, string s)
{
    // find first z and change it to a
    int ind = -1;
    for(int i=0; i<n; i++)
    {
        if(s[i] == 'z')
        {
            ind = i;
            break;
        }
    }
    
    if(ind == -1) return s;
    
    while(ind < n && s[ind] == 'z')
    {
        s[ind] = 'a';
        ind++;
    }
    return s;
}

int main() 
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int n;
        cin >> n;
        
        string s;
        cin >> s;
        
        cout << substringShift(n,s) << endl;
    }
}
