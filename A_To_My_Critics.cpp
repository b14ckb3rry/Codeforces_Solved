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
        int a,b,c; cin>>a>>b>>c;
        int sum1=a+b;
        int sum2=b+c;
        int sum3=a+c;
        if(sum1>=10 || sum2>=10 || sum3>=10) cout<<"YES"<<nl;
        else cout<<"NO"<<nl;
    }
    
    return maru
}