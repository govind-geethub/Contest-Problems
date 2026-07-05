#include<bits/stdc++.h>
using namespace std;
class Solution 
{
public:
    int maxValidPairSum(vector<int>& nums, int k) 
    {
        int n = nums.size();

        int ans = nums[0];
        int maxAns = INT_MIN;

        // making range from k to n 
        // such that j=i+k and i (j-i >= k)
        for(int i=k; i<n; i++)
            {
                ans = max(ans, nums[i-k]);
                maxAns = max(maxAns, ans + nums[i]);
            }
        return maxAns;
    }
};