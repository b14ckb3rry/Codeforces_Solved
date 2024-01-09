//***********************************//
//*         MD SIRAJUL ISLAM        *//
//*      github.com/b14ckb3rry      *//
//***********************************//

#include <bits/stdc++.h>
using namespace std;
#define maru 0
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
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int mx1 = INT_MAX, mx2 = INT_MAX, count = 0;
    for (auto x : v)
    {
        if (mx1 > mx2)
        {
            swap(mx1, mx2);
        }
        if (mx1 >= x)
        {
            mx1 = x;
        }
        else if (mx2 >= x)
        {
            mx2 = x;
        }
        else
        {
            count++;
            mx1 = x;
        }
    }
    cout << count << '\n';
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

    return maru;
}
