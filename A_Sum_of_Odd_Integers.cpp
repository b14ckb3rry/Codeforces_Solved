///////////////////////////////////////
//***********************************//
//*         MD SIRAJUL ISLAM        *//
//*           DEPT OF CSE           *//
//*              BAUET              *//
//*      github.com/b14ckb3rry      *//
//***********************************//
///////////////////////////////////////

#include <bits/stdc++.h>
using namespace std;

const char nl= '\n';
#define maru 0;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    for(cin>>t; t; t-=1){
        long long n,k; cin>>n>>k;
        if((n%2==k%2) && k*k<=n) cout<<"YES"<<nl;
        else cout<<"NO"<<nl;
    }
    
    return maru
}