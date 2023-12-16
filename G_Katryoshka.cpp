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
    
    long long n,m,k,mini=0,count=0,new_n;
    cin>>n>>m>>k;
    if(n==0 || k==0){
        cout<<"0"<<nl;
        Love_Byte
    }
    mini=min({n,m,k});
    
    count+=mini;
    n-=mini; m-=mini; k-=mini;
    new_n=n/2;
    mini=min(new_n,k);

    count+=mini;
    cout<<count<<nl;

    Love_Byte
}