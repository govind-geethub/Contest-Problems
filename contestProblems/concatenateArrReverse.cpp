#include<bits/stdc++.h>
using namespace std;
class Solution 
{
public:
    vector<int> concatWithReverse(vector<int>& nums) 
    {
        int n=nums.size();
        vector<int>ans(2*n);

        for(int i=0; i<n; i++) ans[i]=nums[i];
        for(int i=2*n-1; i>=n; i--) 
            {
                // cout << i%n << endl;
                // cout << nums[i%n] << endl;
                ans[i]=nums[2*n-i-1];
            }
        return ans;
    }
};