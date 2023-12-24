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
        vector<int> v(n);
        bool flag = false;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] == 0)
            {
                flag = true;
            }
        }
        if (flag)
        {
            cout << "0\n";
            continue;
        }
        for (auto x : v)
        {
            if (x < 0)
                cnt++;
        }
        if (cnt % 2)
        {
            cout << "0\n";
            continue;
        }
        cout << 1 << '\n'
             << "1 " << 0 << '\n';
    }

    return maru
}