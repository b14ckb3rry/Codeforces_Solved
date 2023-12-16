//***********************************//
//*         MD SIRAJUL ISLAM        *//
//*      github.com/b14ckb3rry      *//
//***********************************//

#include <bits/stdc++.h>
using namespace std;
#define maru 0;

void solve(string s)
{
    priority_queue<int> uppercase;
    priority_queue<int> lowercase;
    for (int i = 0; i < (int)s.size(); i++)
    {
        if (isupper(s[i]) && s[i] != 'B')
        {
            uppercase.push(i);
        }
        if (islower(s[i]) && s[i] != 'b')
        {
            lowercase.push(i);
        }
        if (s[i] == 'B' && !uppercase.empty())
        {
            s[uppercase.top()] = '#';
            uppercase.pop();
        }
        if (s[i] == 'b' && !lowercase.empty())
        {
            s[lowercase.top()] = '#';
            lowercase.pop();
        }
    }
    for (int i = 0; i < (int)s.size(); i++)
    {
        if (s[i] != 'B' && s[i] != 'b' && s[i] != '#')
        {
            cout << s[i];
        }
        else
        {
            continue;
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
        string s;
        cin >> s;
        solve(s);
        cout << '\n';
    }

    return maru
}