#include<bits/stdc++.h>
using namespace std;
class Solution 
{
public:
    vector<int> scoreValidator(vector<string>& events) 
    {
        int score=0, counter=0;
        vector<int>ans(2);

        for(int i=0; i<events.size(); i++)
            {
                if(events[i]>="0" && events[i]<="6" && counter!=10)
                {
                    score+=stoi(events[i]);
                }
                else if(events[i]=="W" && counter!=10) 
                {
                    counter++;
                }
                else if((events[i]=="WD" || events[i]=="NB") && counter!=10)score++;
                else if(counter==10) break;
            }
        ans[0]=score;
        ans[1]=counter;
        return ans;
    }
};