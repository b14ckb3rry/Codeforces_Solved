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
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    ll div = 1;
    for (ll i=0; i<n; i++)
    {
        cin >> v[i];
        div *= v[i];
    }
    if (div == 2023 || 2023 % div == 0)
    {
        cout << "YES\n";
        cout << 2023 / div << ' ';
        for (ll i = 0; i < k - 1; i++)
        {
            cout << 1 << ' ';
        }
        cout << '\n';
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

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return maru
}