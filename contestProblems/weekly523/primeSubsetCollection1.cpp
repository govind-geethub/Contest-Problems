#include<bits/stdc++.h>
using namespace std;
class Solution 
{
public:
    bool isPrime(int n)
    {
        if(n < 2) return false;
        for(int i=2; i*i <= n; i++)
        {
            if(n % i == 0) return false;
        }
        return true;
    }
    
    vector<int> maxPrimes(int n, int s) 
    {
        vector<int> ans;
        long long sum = 0;
        for(int i=2; i<=n; i++)
        {
            if(isPrime(i))
            {
                if(sum + i > s) break;
                ans.push_back(i);
                sum += i;
            }
        }
        return ans;
    }
};