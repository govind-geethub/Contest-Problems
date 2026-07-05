#include<bits/stdc++.h>
using namespace std;
class Solution 
{
public:
    bool canMakeSubsequence(string s, string t) 
    {
        int n = s.length(), m = t.length();
        if(n > m) return false;

        vector<int> pref(n+1, -1);
        int j =0;

        for(int i=0; i<n; i++)
            {
                while(j < m && t[j] != s[i]) j++;
                if(j == m) break;
                pref[i+1] = j;
                j++;
            }

        vector<int> suff(n+1, -1);
        suff[n] = m;
        j = m-1;

        for(int i=n-1; i>=0; i--)
        {
            while(j >= 0 && t[j] != s[i]) j--;
            if(j < 0) break;
            suff[i] = j;
            j--;
        }

        if(pref[n] != -1) return true;

        for(int i=0; i<n; i++)
            {
                if(suff[i+1] != -1 && (i == 0 || pref[i] != -1) 
                   && (suff[i+1] - pref[i] > 1)) {
                return true;
                }
            }
        return false;
    }
};