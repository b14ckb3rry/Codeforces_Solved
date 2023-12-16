//***********************************//
//*         MD SIRAJUL ISLAM        *//
//*           DEPT OF CSE           *//
//*              BAUET              *//
//*      github.com/b14ckb3rry      *//
//***********************************//

#include <bits/stdc++.h>
using namespace std;
#define maru 0;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m,a,b; cin>>n>>m>>a>>b;
    int res=0;
    if(m*a<=b) res=n*a;
    else res=(n/m) * b+min((n%m)*a,b);
    cout<<res<<'\n';

    return maru
}