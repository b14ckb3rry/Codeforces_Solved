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

    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        ll countb = 0, res = 0;
        for (ll i = n - 1; i >= 0; i--)
        {
            if (s[i] == 'B')
                countb++;
            else
            {
                res += countb;
                if (countb > 0)
                {
                    s[i] = 'B';
                    i++;
                    countb = 0;
                }
            }
        }
        cout << res << '\n';
    }

    return maru
}