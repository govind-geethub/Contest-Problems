#include<bits/stdc++.h>
using namespace std;

void didNotPrint(int n, string s)
{
    stack<int> st;
    vector<int> vis(n, -1);

    for(int i=0; i<n; i++)
    {
        if(s[i] == '1')
        {
            vis[i] = 0;
            st.push(i);
        }
        else if(s[i] == '2')
        {
            if(!st.empty())
            {
                int ind = st.top();
                st.pop();
                vis[ind] = 1;
            }
            else vis[i] = 1;
        }
        else vis[i] = 1;
    }

    int cnt = 0;
    for(int i=0; i<n; i++) if(vis[i] == -1 || vis[i] == 0) cnt++;

    cout << cnt << endl;
    for(int i=0; i<n; i++) if(vis[i] == -1 || vis[i] == 0) cout << i+1 << " ";
    cout << endl;
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        didNotPrint(n,s);
    }
    return 0;
}