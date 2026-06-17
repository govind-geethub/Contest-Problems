#include<bits/stdc++.h>
using namespace std;

string interest(int x, int y)
{
    int diff = abs(x-y);
    
    if(diff <= 2) return "Interesting";
    return "Boring";
}

int main()
{
    int x,y;
    cin >> x >> y;
    
    cout << interest(x,y) << endl;
    return 0;
}