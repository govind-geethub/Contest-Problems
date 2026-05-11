#include<bits/stdc++.h>
using namespace std;
#define ll long long

// logic:
// a tor b = c
// for b = ternary(c[i])-ternary(a[i])
//         individually...if (-)ve then +3 to it

string ternary(ll a)
{
    string s;
    while(a>=3)
    {
        s+=to_string(a%3);
        a/=3;
    }
    s+=to_string(a);
    reverse(s.begin(), s.end());
    return s;
}

ll ternaryLogic(ll a, ll c)
{
    string s1=ternary(a);
    //cout << s1 << endl;
    string s2=ternary(c);
    //cout << s2 << endl;

    if(s1.length()<s2.length())
    {
        int n=s2.length()-s1.length();
        reverse(s1.begin(), s1.end());
        while(n--) s1+='0';
        reverse(s1.begin(), s1.end());
    }

    if(s1.length()>s2.length())
    {
        int n=s1.length()-s2.length();
        reverse(s2.begin(), s2.end());
        while(n--) s2+='0';
        reverse(s2.begin(), s2.end());
    }

    //cout << s1 << " " << s2 << endl;

    string res;
    for(int i=0; i<s1.length(); i++)
    {
        res+=to_string(((s2[i]-'0')-(s1[i]-'0')+3)%3);
        //cout << res << endl;
    }

    //cout << res << endl;
    ll ans=0;
    for(int i=0; i<res.length(); i++)   ans=ans*3+(res[i]-'0');
    return ans;
}

int main()
{
    ll a,c;
    cin >> a >> c;

    cout << ternaryLogic(a,c) << endl;
    return 0;
}