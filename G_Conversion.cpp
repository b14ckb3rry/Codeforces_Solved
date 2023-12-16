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
    
    string s; cin>>s;
    for(int i=0; i<s.size(); i++){
        if(s[i]==','){
            s[i]=' ';
        }
        if(s[i]>='a' && s[i]<='z'){
            s[i]-=32;
        }
        else if(s[i]!=' '){
            s[i]+=32;
        }
    }
    cout<<s<<nl;
    
    Love_Byte
}