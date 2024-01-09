//***********************************//
//*         MD SIRAJUL ISLAM        *//
//*      github.com/b14ckb3rry      *//
//***********************************//

#include <bits/stdc++.h>
using namespace std;
#define maru 0;
typedef long long ll;
#ifdef ONLINE_JUDGE
#define debug(...) 101
#define debug_array(x, y) 101
#else
#include "blackBox.h"
#endif

void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    if (n == 1)
    {
        cout << v[0] << '\n';
        return;
    }
    cout << v[0] << ' ';
    ll sum = v[0];
    ll od = 0, ev = 0;

    if (v[0] % 2 == 0)
    {
        ev++;
    }
    else
    {
        od++;
    }
    for (ll i = 1; i < n; i++)
    {
        sum += v[i];
        if (v[i] & 1)
        {
            od++;
        }
        if (v[i] % 2 == 0)
        {
            ev++;
        }
        ll res = od / 3;
        ll l = od - res;
        cout << sum - res - l % 2 << ' ';
    }
    cout << '\n';
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