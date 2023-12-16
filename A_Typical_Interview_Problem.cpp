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
    
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string s; cin>>s;
        // int flag=0;
        // for(int i=0; i<n-1; i++){
        //     if(s[i]=='F' && s[i+1]=='B'){
        //         flag=1;
        //     }
        // }
        string check="FBFFBFFBFBFFBFFBF";
        if(check.find(s)!=string::npos) cout<<"YES"<<nl;
        else cout<<"NO"<<nl;
    }
    
    Love_Byte
}