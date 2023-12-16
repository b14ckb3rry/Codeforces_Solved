//***********************************//
//*         MD SIRAJUL ISLAM        *//
//*      github.com/b14ckb3rry      *//
//***********************************//

#include <bits/stdc++.h>
using namespace std;
#define maru 0;
typedef long long ll;
typedef unsigned long long ull;
const ll N = 2e18;
vector<ll> v;
ll n;
char c;

struct custom_hash
{
    static ull splitmix64(ull temp)
    {
        temp += 0x9e3779b97f4a7c15;
        temp = (temp ^ (temp >> 30)) * 0xbf58476d1ce4e5b9;
        temp = (temp ^ (temp >> 27)) * 0x94d049bb133111eb;
        return temp ^ (temp >> 31);
    }
    ull operator()(ull temp) const
    {
        static const ull rnd = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(temp + rnd);
    }
};

unordered_map<ll, ll, custom_hash> mp;
unordered_map<ll, ll, custom_hash> dp;

void solve()
{
    cin >> c >> n;
    if (c == '+')
    {
        v.push_back(n);
        mp[n]++;
    }
    else
    {
        if (mp[n] == 0)
        {
            cout << n << '\n';
            return;
        }
        else
        {
            ll temp = n + n;
            if (dp[n])
                temp = dp[n];
            while (101011 == 101011)
            {
                if (!mp[temp])
                {
                    cout << temp << '\n';
                    return;
                }
                temp += n;
                dp[n] = temp;
            }
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