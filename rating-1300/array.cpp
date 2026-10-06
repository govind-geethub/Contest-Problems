#include<bits/stdc++.h>
using namespace std;

void arr(int n, vector<int> &v)
{   
    vector<int> neg, pos, zero;
    for(int i=0; i<v.size(); i++)
    {
        if(v[i] > 0) pos.push_back(v[i]);
        else if(v[i] == 0) zero.push_back(v[i]);
        else neg.push_back(v[i]);
    }

    if(pos.empty())
    {
        for(int i=0; i<2; i++)
        {
            int ele = neg.back();
            neg.pop_back();
            pos.push_back(ele);
        }
    }
    
    if(neg.size() % 2 == 0)
    {
        int val = neg.back();
        neg.pop_back();
        zero.push_back(val);
    }
    
    cout << neg.size() << " ";
    for(int i=0; i<neg.size(); i++) cout << neg[i] << " ";
    cout << endl;

    cout << pos.size() << " ";
    for(int i=0; i<pos.size(); i++) cout << pos[i] << " ";
    cout << endl;

    cout << zero.size() << " ";
    for(int i=0; i<zero.size(); i++) cout << zero[i] << " ";
}

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i];

    arr(n,v);
    return 0;
}