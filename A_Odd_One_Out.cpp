//***********************************//
//*         MD SIRAJUL ISLAM        *//
//*      github.com/b14ckb3rry      *//
//***********************************//

#include <bits/stdc++.h>
using namespace std;
#define maru 0;
#ifdef ONLINE_JUDGE
#define debug(...) 101
#define debug_array(x,y) 101
#else
#include "blackBox.h"
#endif

void solve()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a==b)
    {
        cout << c;
    }
    else if(a==c)
    {
        cout << b;
    }
    else
    {
        cout << a;
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while (t--)
    {
        solve();
        cout << '\n';
    }
    
    return maru
}