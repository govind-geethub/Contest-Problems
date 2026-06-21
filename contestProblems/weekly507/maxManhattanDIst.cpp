#include<bits/stdc++.h>
using namespace std;
class Solution 
{
public:
    int maxDistance(string moves) 
    {
        int x=0, y=0;
        int dir=0;

        for(char c : moves)
        {
            if(c == 'U') x++;
            else if(c == 'D') x--;
            else if(c == 'R') y++;
            else if(c == 'L') y--;
            else dir++;
        }

        return abs(x) + abs(y) + dir;
    }
};