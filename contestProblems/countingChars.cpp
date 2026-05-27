// codechef starters 240
#include<bits/stdc++.h>
using namespace std;

vector<int> countAB(string word)
{
    int count1=0, count2=0;
    for(int i=0; i<word.length(); i++)
    {
        if(word[i]=='a') count1++;
        else count2++;
    }

    return {count1,count2};
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;
        
        string word;
        cin >> word;

        vector<int>ans=countAB(word);
        for(int i=0; i<ans.size(); i++) cout << ans[i] << " ";
        cout << endl;
    }
    return 0;
}