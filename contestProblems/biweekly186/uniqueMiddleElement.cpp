#include<bits/stdc++.h>
using namespace std;
class Solution 
{
public:
    bool isMiddleElementUnique(vector<int>& nums) 
    {
        int n = nums.size();
        int ele = nums[n/2];
        int freq = 0;

        for(int i=0; i<n; i++)
            {
                if(nums[i] == ele)
                {
                    freq++;
                    if(freq > 1) return false;
                }
            }
        return true;
    }
};