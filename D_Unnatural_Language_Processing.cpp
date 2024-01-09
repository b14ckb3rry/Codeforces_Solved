//***********************************//
//*         MD SIRAJUL ISLAM        *//
//*      github.com/b14ckb3rry      *//
//***********************************//

#include <bits/stdc++.h>
using namespace std;
#define maru 0;
#ifdef ONLINE_JUDGE
#define debug(...) 101
#define debug_array(tmp, y) 101
#else
#include "blackBox.h"
#endif

char ok(char c)
{
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int count = 0;
    string tmp;
    for (int i = 0; i < n; i++)
    {
        if (ok(s[i]))
        {
            if (i + 2 < n && !ok(s[i + 1]) && !ok(s[i + 2]))
            {
                tmp += s[i];
                tmp += s[i + 1];
                if (i != n - 1)
                {
                    tmp += ".";
                }
                i++;
                continue;
            }
            else
            {
                tmp += s[i];
                if (i != n - 1)
                {
                    tmp += ".";
                }
            }
        }
        else
        {
            tmp += s[i];
        }
    }
    string res;
    count = 0;
    for (int i = (int)tmp.size() - 1; i >= 0; i--)
    {
        if (tmp[i] == '.' && count == 1)
        {
            count = 0;
            continue;
        }
        if (tmp[i] != '.')
        {
            res += tmp[i];
            count++;
        }
        else
        {
            res += tmp[i];
        }
    }
    reverse(res.begin(), res.end());
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
