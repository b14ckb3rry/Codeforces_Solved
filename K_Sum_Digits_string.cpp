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
    
    int n; cin>>n;
    string s; cin>>s;
    int sum=0;
    // while(m!=0){
    //     int digit=m%10;
    //     sum+=digit;
    //     m/=10;
    // }
    for(int i=0; i<n; i++){
        int digit=s[i]-'0'; //or use 48
        sum+=digit;
    }
    cout<<sum<<nl;
    
    Love_Byte
}