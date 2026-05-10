// upsolve leetcode biweekly

#include<bits/stdc++.h>
using namespace std;

class Solution 
{
public:

    // total 4 cases are acceptable
    int minFlips(string s) 
    {
        int n=s.size();
        int count1=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='1') count1++;
        }

        int count0=n-count1;
        int ans=n;

        // making 1s or all 0s
        ans=min(count1, count0);

        // exactly one 1
        ans=min(ans, abs(count1-1));

        // case: 100...001
        if(n>1)
        {
            int cost=0;
            if(s[0]=='0') cost++;
            if(s[n-1]=='0') cost++;

            for(int i=1; i<n-1; i++)
            {
                if(s[i]=='1') cost++;
            }

            ans=min(ans, cost);
        }

        return ans;
    }
};