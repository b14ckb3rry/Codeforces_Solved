//***********************************//
//*         MD SIRAJUL ISLAM        *//
//*      github.com/b14ckb3rry      *//
//***********************************//

#include <bits/stdc++.h>
using namespace std;
#define maru 0;
typedef long long ll;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, t;
    cin >> n >> t;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());

    vector<ll> prefsum(n);
    for (ll i = 0; i < n; i++)
    {
        prefsum[i] = 0;
    }
    prefsum[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        prefsum[i] = prefsum[i - 1] + v[i];
    }

    while (t--)
    {
        ll x, y;
        cin >> x >> y;
        // ll res = 0;
        // for (ll i = 0; i < x; i++)
        // {
        //     if (y >= x - i)
        //     {
        //         res += v[i];
        //     }
        // }
        // cout << res << '\n';
        if (x == y)
        {
            cout << prefsum[x - 1] << '\n';
        }
        else
        {
            cout << prefsum[x - 1] - prefsum[x - y - 1] << '\n';
        }
    }

    return maru
}