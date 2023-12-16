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

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        int res = 0, dot = 0;
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '#' && flag)
            {
                dot = 0;
                flag = false;
            }
            if (s[i] == '.' && flag)
            {
                res++;
                dot++;
            }
            if (dot > 2)
            {
                res = 2;
                break;
            }
            if (s[i] == '.' && !flag)
            {
                flag = true;
                res++; dot++;
            }
        }
        cout << res << '\n';
    }

    return maru
}