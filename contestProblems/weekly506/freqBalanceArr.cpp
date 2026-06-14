#include<bits/stdc++.h>
using namespace std;
class Solution 
{
public:
    int getLength(vector<int>& nums) 
    {
        int n = nums.size();
        int ans=1;

        for(int i=0; i<n; i++)
            {
            unordered_map<int,int>mpp;
            map<int,int>freqCnt;

            for(int j=i; j<n; j++)
                {
                    int x = nums[j];
                    if(mpp.count(x))
                    {
                        int oldCount = mpp[x];
                        freqCnt[oldCount]--;
                        if(freqCnt[oldCount] == 0) freqCnt.erase(oldCount);
                    }
                    mpp[x]++;
                    freqCnt[mpp[x]]++;

                    int len = j-i+1;
                    bool balanced = false;

                    if(len == 1) balanced = true;
                    if(mpp.size() == 1) balanced = true;
                    else if(freqCnt.size() == 2)
                    {
                        auto it = freqCnt.begin();
                        int f1 = it->first;
                        
                        ++it;
                        int f2 = it->first;
                        
                        if(f2 == 2 * f1) balanced = true;
                    }

                    if(balanced) ans = max(ans, len);
                }
            }
        return ans;
    }
};