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

const char nl='\n';
#define maru 0;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while(t--){
        long long a,b,c,jog=0; cin>>a>>b>>c;
        if(c%2==0){
            jog=c/2;
            a+=jog; b+=jog;
        }
        else{
            jog=c/2;
            a+=jog+1; b+=jog;
        }
        if(a>b) cout<<"First"<<nl;
        else cout<<"Second"<<nl;

    }
    
    return maru
}