// codechef starters 240
#include<bits/stdc++.h>
using namespace std;

int binarySmile(int n, string a, string b)
{
    int countA=0, countB=0;
    for(int i=0; i<n; i++)
    {
        if(a[i]=='1') countA++;
        if(b[i]=='1') countB++;
    }

    if(countA!=countB) return -1;
    if(a.length() != b.length()) return -1;

    if(a==b) return 0;

    vector<int>indA, indB;
    for(int i=0; i<n; i++)
    {
        if(a[i]=='1') indA.push_back(i);
        if(b[i]=='1') indB.push_back(i);
    }

    int count=0;
    for(int i=0; i<indA.size(); i++)
    {
        if(indA[i]!=indB[i]) count++;
    }
    return count;
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        string a,b;
        cin >> a >> b;

        cout << binarySmile(n,a,b) << endl;
    }

    return 0;
}