#include<bits/stdc++.h>
using namespace std;
class Solution 
{
public:
    vector<int> countWordOccurrences(vector<string>& chunks, vector<string>& queries) 
    {
        string s;
        for(int i=0; i<chunks.size(); i++) s+=chunks[i];
        int n=s.length();

        int i=0;
        unordered_map<string,int>mpp;
        while(i<n)
            {
                int ind=i;
                string s1;
                while(ind<n && ((s[ind]>='a' && s[ind]<='z') || s[ind]=='-'))
                    {
                        if(s[ind]=='-' && ind-1>=0 && s[ind-1]>='a' && s[ind-1]<='z' && ind+1<n && s[ind+1]>='a' && s[ind+1]<='z')
                        {
                            s1+=s[ind];
                            ind++;
                        }

                        else if(ind<n && s[ind]>='a' && s[ind]<='z')
                        {
                            s1+=s[ind];
                            ind++;
                        }
                            
                        else break;
                    }
                    
                i=ind+1;
                mpp[s1]++;
            }

        vector<int>ans(queries.size());
        for(int i=0; i<queries.size(); i++)
            {
                ans[i]=mpp[queries[i]];
            }
        return ans;
    }
};