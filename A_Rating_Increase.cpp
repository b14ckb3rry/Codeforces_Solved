//***********************************//
//*         MD SIRAJUL ISLAM        *//
//*      github.com/b14ckb3rry      *//
//***********************************//

#include <bits/stdc++.h>
using namespace std;
#define maru 0;
#ifdef ONLINE_JUDGE
#define debug(...) 101
#define debug_array(x, y) 101
#else
#include "blackBox.h"
#endif

void solve()
{
    int n;
    string s;
    cin >> s;
    n = s.size();
    string x;
    int z = 0;
    for (char c : s)
    {
        if (c == '0')
        {
            z++;
        }
    }
    if (z == n - 1)
    {
        cout << "-1\n";
        return;
    }
    x += s[0];
    int temp;
    for (int i = 1; i < n; i++)
    {
        if (s[i] == '0')
        {
            x += s[i];
        }
        else
        {
            temp = i;
            break;
        }
    }
    string y;
    for (int i = temp; i < n; i++)
    {
        y += s[i];
    }
    if (x == y)
    {
        cout << "-1\n";
    }
    else
    {
        stringstream ss(x), sss(y);
        int f, g;
        ss >> f;
        sss >> g;
        if (f > g)
        {
            cout << "-1\n";
        }
        else
        {
            cout << f << " " << g << '\n';
        }
    }
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return maru
}