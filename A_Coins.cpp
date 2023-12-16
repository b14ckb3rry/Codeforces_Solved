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
    cout.tie(nullptr);
    
    int t; cin>>t;
    while(t--){
        long long a,b; cin>>a>>b;
        if(a%2==0) cout<<"YES"<<nl;
        else if((a-b)%2==0) cout<<"YES"<<nl;
        else cout<<"NO"<<nl;
    }
    
    Love_Byte
}