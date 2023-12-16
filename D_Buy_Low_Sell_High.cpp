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

    int n;
    cin >> n;
    multiset<int> s;
    ll res = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
        if (*s.begin() < x)
        {
            ll temp = x - *s.begin();
            res += temp;
            s.erase(s.begin());
            s.insert(x);
        }
    }
    cout << res << '\n';

    return maru
}