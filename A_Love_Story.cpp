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
        string s; cin>>s;
        string st="codeforces";
        int flag=0;
        for(int i=0; i<10; i++){
            if(s[i]!=st[i]){
                flag++;
            }
        }
        cout<<flag<<nl;
    }
    Love_Byte
}