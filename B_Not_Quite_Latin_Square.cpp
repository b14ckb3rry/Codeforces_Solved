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
    char arr[3][3];
    int a = 0, b = 0, c = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            char ch;
            cin >> ch;
            if (ch == 'A')
                a++;
            if (ch == 'B')
                b++;
            if (ch == 'C')
                c++;
        }
    }
    if (a == 2)
    {
        cout << 'A';
    }
    else if (b == 2)
    {
        cout << 'B';
    }
    else if (c == 2)
    {
        cout << 'C';
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
        cout << '\n';
    }

    return maru
}