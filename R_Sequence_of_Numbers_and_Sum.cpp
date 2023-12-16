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

int main()
{
    const char nl= '\n';
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    while(1){
    int a,b; cin>>a>>b;
    int res=0;
    int c=min(a,b);
    int d=max(a,b);
    if(c<=0 || d<=0) {
        break;
    }
    for(int i=c; i<=d; i++) {
        cout<<i<<" ";
        res+=i;
    }
    //res=0.5*d*(d+1)-0.5*(c-1)*(c-1+1);
    cout<<"sum ="<<res<<nl;
    }    
    return 0;
}