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
    map<char, int> mp;
    int n;
    string s;
    cin >> n >> s;
    int res = 0;
    for (char c : s)
    {
        mp[c]++;
    }
    for (auto [x, y] : mp)
    {
        res += (y >= (x - '@'));
    }
    cout << res;
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