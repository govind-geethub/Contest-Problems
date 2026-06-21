#include<bits/stdc++.h>
using namespace std;
#define ll long long

class Solution 
{
public:
    int countValidSubarrays(vector<int>& nums, int x) 
    {
        ll n = nums.size();
        ll count = 0;
        
        for(ll i=0; i<n; i++)
        {
            ll sum = 0;
            for(ll j=i; j<n; j++)
            {
                sum = sum + nums[j];
                if(sum % 10 == x)
                {
                    if(sum >=0 && sum <= 9) count++;
                    else
                    {
                        ll temp = sum;
                        temp = temp/10;
                        while(temp >= 10) temp = temp/10;
                        if(temp == x) count++;
                    }
                }
            }
        }
        return (int) count;
    }
};