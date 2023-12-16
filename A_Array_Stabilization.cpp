//***********************************//
//*         MD SIRAJUL ISLAM        *//
//*      github.com/b14ckb3rry      *//
//***********************************//

#include <bits/stdc++.h>
using namespace std;
#define maru 0;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    if (n == 2)
    {
        cout << "0\n";
        return maru
    }
    // int mx = INT_MIN, mn = INT_MAX;
    // for (auto x : v)
    // {
    //     if (x > mx)
    //     {
    //         mx = x;
    //     }
    //     if (x < mn)
    //     {
    //         mn = x;
    //     }
    // }
    sort(v.begin(), v.end());
    v.pop_back();
    n--;
    // int res = v.back() - v.front();
    int x = v[n] - v[1];
    int y = v[n - 1] - v[0];
    int res = min(x, y);
    cout << res << '\n';

    return maru
}