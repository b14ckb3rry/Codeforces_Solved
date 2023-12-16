//***********************************//
//*         MD SIRAJUL ISLAM        *//
//*      github.com/b14ckb3rry      *//
//***********************************//

#include <bits/stdc++.h>
using namespace std;
#define maru 0;
const char ch[8] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s[1] - '0';
        char c = s[0];
        for (int i = 1; i < n; i++)
        {
            cout << c << i << '\n';
        }
        for (int i = n + 1; i <= 8; i++)
        {
            cout << c << i << '\n';
        }
        for (int i = 0; i < 8; i++)
        {
            if (ch[i] == c)
            {
                continue;
            }
            else
            {
                cout << ch[i] << n << '\n';
            }
        }
    }

    return maru
}