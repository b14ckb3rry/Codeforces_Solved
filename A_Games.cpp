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
    vector<int> v1(n);
    vector<int> v2(n);
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        v1[i] = x;
        v2[i] = y;
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (v1[i] == v2[j])
            {
                count++;
            }
        }
    }
    cout << count << '\n';

    return maru
}