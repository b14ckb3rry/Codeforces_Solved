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
    
    int y; cin>>y;
    while(y--){
        string s; cin>>s;
        // int count=0;
        // for(int i=0; i<s.size()-3; i++){
        //     if((s[i]=='0' && s[i+1]=='1' && s[i+2]=='0') || (s[i]=='1' && s[i+1]=='0' && s[i+2]=='1')){
        //         count=1;
        //     }
        //     else{
        //         count=0;
        //     }
        // }
        int a=s.find("101");
        int b=s.find("010");
        if(a!=string::npos || b!=string::npos) cout<<"Good"<<nl;
        else cout<<"Bad"<<nl;
    }
    
    Love_Byte
}