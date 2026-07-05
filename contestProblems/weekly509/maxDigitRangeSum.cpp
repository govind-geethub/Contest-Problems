#include<bits/stdc++.h>
using namespace std;
class Solution 
{
public:
    int maxDigitRange(vector<int>& nums) 
    {
        int n = nums.size();
        vector<pair<int,int>> v;
        for(int i=0; i<n; i++)
            {
                int temp = nums[i];
                int mini = 10;
                int maxi = -1;
                while(temp > 0)
                    {
                        int a = temp % 10;
                        maxi = max(a, maxi);
                        mini = min(a, mini);
                        temp = temp / 10;
                    }
                int range = maxi - mini;
                v.push_back({range,nums[i]});
            }
        sort(v.begin(), v.end());

        int sum = v[n-1].second;
        int range = v[n-1].first;
        for(int i=n-2; i>=0; i--)
            {
                if(v[i].first == range) sum += v[i].second; 
            }
        return sum;
    }
};