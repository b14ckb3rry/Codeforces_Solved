//***********************************//
//*         MD SIRAJUL ISLAM        *//
//*      github.com/b14ckb3rry      *//
//***********************************//

#include <bits/stdc++.h>
using namespace std;
#define maru 0
#ifdef ONLINE_JUDGE
#define debug(...) 101
#define debug_array(x, y) 101
#else
#include "blackBox.h"
#endif

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int plus = 0, minus = 0;
        for (auto x : s)
        {
            if (x == '-')
            {
                minus++;
            }
            if (x == '+')
            {
                plus++;
            }
        }
        if (plus > minus)
        {
            int res = plus - minus;
            cout << res << '\n';
        }
        else if (minus > plus)
        {
            int res = minus - plus;
            cout << res << '\n';
        }
        else
        {
            cout << "0\n";
        }
    }

    return maru;
}