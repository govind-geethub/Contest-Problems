#include<bits/stdc++.h>
using namespace std;
#define ll long long

class Solution 
{
public:
    int divisibleGame(vector<int>& nums) 
    {
        ll mod = 1e9 + 7;
        int n = nums.size();

        int maxVal = 0;
        set<int>k;

        for(int num: nums)
            {
                maxVal = max(maxVal, num);
                for(int i=1; i*i<=num; ++i)
                    {
                        if(num % i == 0)
                        {
                            if(i > 1) k.insert(i);
                            if(num / i > 1) k.insert(num/i);
                        }
                    }
            }

        k.insert(maxVal+1);     // it will do the job for Bob
        ll maxDiff = LLONG_MIN;
        int minK = 2;

        // using kadane's
        for(int val : k)
            {
                ll currMax = LLONG_MIN;
                ll currSum = 0;

                for(int i=0; i<n; i++)
                    {
                        ll a = (nums[i] % val == 0) ? nums[i] : -nums[i];
                        currSum += a;

                        if(currSum > currMax) currMax = currSum;
                        if(currSum < 0) currSum = 0;
                    }
                if(currMax > maxDiff)
                {
                    maxDiff = currMax;
                    minK = val;
                }
            }

        ll ans = (maxDiff % mod) * (minK % mod);
        ans = (ans % mod + mod) % mod;
        return ans;
    }
};