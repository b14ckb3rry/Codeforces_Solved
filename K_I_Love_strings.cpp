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
        string s,t; cin>>s>>t;
        // getline(cin,s);
        // getline(cin,t);
        int size=max(s.size(), t.size());
        for(int i=0; i<size; i++){
            if(s.size()>i){
                cout<<s[i];
            }
            if(t.size()>i){
                cout<<t[i];
            }
        }
        cout<<nl;

    }
    
    Love_Byte
}