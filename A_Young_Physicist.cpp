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
    
    int n; cin>>n;
    int a,b,c,s1=0,s2=0,s3=0;
    for(int i=1; i<=n; i++){
        cin>>a>>b>>c;
        s1+=a; s2+=b; s3+=c;
    }
    if(s1==0 && s2==0 && s3==0) cout<<"YES"<<nl;
    else cout<<"NO"<<nl;
    Love_Byte
}