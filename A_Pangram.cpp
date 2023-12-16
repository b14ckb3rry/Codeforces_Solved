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

    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll fre[128] = {0};
    int Min = INT_MAX, Max = INT_MIN;
    for (ll i = 0; i < n; i++)
    {
        fre[(int)s[i]]++;
        Max = max(Max, (int)s[i]);
        Min = min(Min, (int)s[i]);
    }
    int k = 0;
    for (ll i = Min; i <= Max; i++)
    {
        if (fre[i] >= 1)
        {
            if (i >= 'a')
            {
                fre[i] = 0;
                fre[i - ' '] = 0;
                k++;
            }
            else
            {
                fre[i] = 0;
                fre[i + ' '] = 0;
                k++;
            }
        }
    }
    if (k == 26){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }

    return maru
}