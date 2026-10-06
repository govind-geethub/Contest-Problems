#include <bits/stdc++.h>
using namespace std;

void pashmakGarden(int x1, int y1, int x2, int y2)
{
    if (x1 != x2 && y1 != y2)
    {
        if (abs(x1 - x2) != abs(y1 - y2))
        {
            cout << -1;
            return;
        }
        cout << x1 << " " << y2 << " " << x2 << " " << y1;
    }
    else if (x1 == x2)
    {
        int dist = abs(y1 - y2);
        cout << x1 + dist << " " << y1 << " " << x2 + dist << " " << y2;
    }
    else
    {
        int dist = abs(x1 - x2);
        cout << x1 << " " << y1 + dist << " " << x2 << " " << y2 + dist;
    }
}

int main()
{
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    pashmakGarden(x1, y1, x2, y2);
    return 0;
}
