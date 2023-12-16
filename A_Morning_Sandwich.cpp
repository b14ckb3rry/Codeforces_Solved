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
    cout.tie(nullptr);
    
    int t;
    for(cin>>t; t; t-=1){
        int b,c,h; cin>>b>>c>>h;
        int slice=c+h;
        if(b>slice){
            cout<<slice*2+1<<nl;
        }
        else{
            cout<<b*2-1<<nl;
        }
    }
    
    return maru
}