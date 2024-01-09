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
typedef long long ll;

void solve()
{
    ll n, x, E = 0, O = 0;
    cin >> n;
    map<ll, ll> st;
    bool flag = false;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        if (i & 1)
        {
            O += x;
        }
        else
        {
            E += x;
        }
        ll tmp = O - E;
        if (tmp == 0)
        {
            flag = true;
        }
        if (st.find(O - E) != st.end())
        {
            flag = true;
        }
        st[tmp] = (i);
    }
    if (flag)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
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