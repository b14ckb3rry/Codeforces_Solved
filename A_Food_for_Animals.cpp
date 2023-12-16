////////////////////////////////////////
//************************************//
//*         MD SIRAJUL ISLAM         *//
//*           DEPT OF CSE            *//
//*              BAUET               *//
//*           BATCH : 15th           *//
//************************************//
////////////////////////////////////////

#include <bits/stdc++.h>
using namespace std;

const char nl= '\n';
#define Love_Byte return 0;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        int a,b,c,x,y; cin>>a>>b>>c>>x>>y;
        x=max(0,x-a);
        y=max(0,y-b);
        int ani=x+y;
        if(ani<=c) cout<<"YES"<<nl;
        else cout<<"NO"<<nl;
    }
    
    Love_Byte
}