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
    
    int k2,k3,k5,k6; cin>>k2>>k3>>k5>>k6;
    int sum=0;
    //int mini=min({k2,k3,k5,k6});
    //k2-=mini; k3-=mini; k5-=mini; k6-=mini;
    int count=0;
    while(k2!=0 && k5!=0 && k6!=0){
        count++;
        k2--; k5--; k6--;
    }
    sum=(count*256);
    count=0;
    while(k2!=0 && k3!=0){
        count++;
        k2--; k3--;
    }
    sum+=(count*32);
    cout<<sum<<nl;
    
    Love_Byte
}