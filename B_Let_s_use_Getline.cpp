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
    
    string s; getline(cin, s);
    for(int i=0; i<s.size(); i++){
        if(s[i]=='\\'){
            break;
        }
        else{
            cout<<s[i];
        }
    }
    cout<<nl;
    
    Love_Byte
}