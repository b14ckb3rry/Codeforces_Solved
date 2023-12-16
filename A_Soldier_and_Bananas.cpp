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
    cin.tie(NULL);
    int res=0, k,n,w; cin>>k>>n>>w;
    for(int i=1; i<=w; i++){
        res+=k*i;
    }
    int banana=(res-n);
    if(banana>0) cout<<banana<<nl;
    else cout<<"0"<<nl;
    
    Love_Byte
}