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
    long long n; cin>>n;
    int count=0;
    while(n!=0){
        if(n%10==4 || n%10==7){
            count++;
        }
        n/=10;
    }
    if(count==7 || count==4) cout<<"YES"<<nl;
    else cout<<"NO"<<nl;
    
    Love_Byte
}