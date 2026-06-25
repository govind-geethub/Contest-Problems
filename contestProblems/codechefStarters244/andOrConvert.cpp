// upsolve
#include <bits/stdc++.h>
using namespace std;

string andOrConvert(int n, string a, string b)
{
    // creating chunks of 0,1 for a & b
    // sizes can be changed for each not extra creation
    
    vector<char>A, B;
    for(int i = 0; i < n; i++)
    {
        if(!i || a[i] != a[i-1]) A.push_back(a[i]);
        if(!i || b[i] != b[i-1]) B.push_back(b[i]);
    }
    
    // check B is a subsequence of A or not
    int ia = 0;
    for(int ib = 0; ib < B.size(); ib++)
    {
        while(ia < A.size() && A[ia] != B[ib]) ia++;
        if(ia == A.size()) return "No";    // reached A's end
        ia++;
    }
    
    return "Yes";
}

int main() 
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int n;
        cin >> n;
        
        string a,b;
        cin >> a >> b;
        
        cout << andOrConvert(n,a,b) << endl;
    }
    
    return 0;
}
