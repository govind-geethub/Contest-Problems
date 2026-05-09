#include<bits/stdc++.h>
using namespace std;
class Solution 
{
public:
    int minGenerations(vector<vector<int>>& points, vector<int>& target)
    {  
        set<vector<int>>s;
        for(int i=0; i<points.size(); i++)
            {
                s.insert(points[i]);
            }
        
        if(s.count(target)) return 0;
        int gen=1;
        
        while(true)
            {
                vector<vector<int>>v(s.begin(), s.end());
                bool found=false;

                for(int i=0; i<v.size(); i++)
                    {
                        for(int j=i+1; j<v.size(); j++)
                            {
                                vector<int>mid(3);
                                mid[0]=(v[i][0]+v[j][0])/2;
                                mid[1]=(v[i][1]+v[j][1])/2;
                                mid[2]=(v[i][2]+v[j][2])/2;

                                if(!s.count(mid))
                                {
                                    if(mid==target) return gen;
                                    s.insert(mid);
                                    found=true;
                                }
                            }
                    }
                if(found==false) return -1;
                gen++;
            }
        return gen;
    }
};