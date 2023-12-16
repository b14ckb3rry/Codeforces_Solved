//***********************************//
//*         MD SIRAJUL ISLAM        *//
//*      github.com/b14ckb3rry      *//
//***********************************//

#include <bits/stdc++.h>
using namespace std;
#define maru 0;
typedef long long ll;

void solve(int n)
{
    vector<int> v(n);
    for (auto &i : v)
    {
        cin >> i;
    }
    vector<ll> sufSum(n + 1);
    for (int i = n - 1; i >= 0; i--)
    {
        sufSum[i] = sufSum[i + 1] + v[i];
    }
    vector<ll> dp(n);
    ll mx = 0;
    n--;
    for (int i = n; i >= 0; i--)
    {
        dp[i] = sufSum[i] + mx;
        mx = max(mx, dp[i]);
    }
    cout << dp.front() << '\n';
}

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
        solve(n);
    }

    return maru
}