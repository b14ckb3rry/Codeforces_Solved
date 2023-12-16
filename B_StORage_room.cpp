//***********************************//
//*         MD SIRAJUL ISLAM        *//
//*      github.com/b14ckb3rry      *//
//***********************************//

#include <bits/stdc++.h>
using namespace std;
#define maru 0;
typedef long long ll;

void solve()
{
    {
        int n;
        cin >> n;
        vector<vector<int>> v(n, vector<int>(n));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> v[i][j];
            }
        }
        vector<int> res(n);
        for (int i = 0; i < n; i++)
        {
            int andd = 1073741823; // or in bitwise operation (1 << 30) - 1;
            for (int j = 0; j < n; j++)
            {
                if (i == j)
                {
                    continue;
                }
                else
                {
                    andd &= v[i][j];
                }
            }
            res[i] = andd;
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == j)
                {
                    continue;
                }
                if (v[i][j] != (res[i] | res[j]))
                {
                    cout << "NO\n";
                    return;
                }
            }
        }
        cout << "YES\n";
        for (auto x : res)
        {
            cout << x << " ";
        }
        cout << '\n';
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