#include<bits/stdc++.h>
using namespace std;
#define ll long long

class Solution 
{
public:
    bool checkGoodInteger(int n) 
    {
        ll digitSum=0, squareSum=0;
        while(n != 0)
            {
                ll digit = n % 10;
                digitSum += digit;
                squareSum += (digit*digit);
                n = n / 10;
            }

        if(squareSum - digitSum >= 50) return true;
        return false;
    }
};