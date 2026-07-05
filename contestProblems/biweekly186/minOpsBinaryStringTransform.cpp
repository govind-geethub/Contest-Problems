#include<bits/stdc++.h>
using namespace std;
class Solution 
{
public:
    int minOperations(string s1, string s2) 
    {
        int n = s1.length();
        if(s1 == s2) return 0;
        if(s1 == "1") return -1;

        int ops = 0;
        for(int i=0; i<n; i++)
            {
                if(s1[i] == s2[i]) continue;
                else if(s1[i] == '0' && s2[i] == '1')
                {
                    s1[i] = '1';
                    ops++;
                }
                else
                {
                    if(i+1 < n && s1[i+1] == '1')
                    {
                        s1[i] = '0';
                        s1[i+1] = '0';
                        ops++;
                    }
                    else if(i+1 < n)
                    {
                        s1[i+1] = '1';
                        ops++;

                        s1[i] = '0';
                        s1[i+1] = '0';
                        ops++;
                    }
                    else if(i-1 >= 0 && s1[i-1] == '1')
                    {
                        s1[i] = '0';
                        s1[i-1] = '0';
                        ops++;
                    }
                    else if(i-1 >= 0 && s1[i-1] == '0')
                    {
                        s1[i-1] = '1';
                        ops++;

                        if(s1[i-1] == '1' && s1[i] == '1')
                        {
                            s1[i] = '0';
                            s1[i-1] = '0';
                            ops++;
                        }
                    }
                    else return -1;
                }
            }

        for(int i=0; i<n; i++)
            {
                if(s1[i] == '0' && s2[i] == '1')
                {
                    s1[i] = '1';
                    ops++;
                }
            }
        return ops;
    }
};