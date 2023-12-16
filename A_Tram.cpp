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
    int count=0, sum=0;
    int a,b;
    while(n--){
        cin>>a>>b;
        sum-=a;
        sum+=b;
        if(sum>count){
            count=sum;
        }
    }
    cout<<count<<nl;
    
    Love_Byte
}