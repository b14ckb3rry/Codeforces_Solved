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
    
    string s; cin>>s;
    string ns;
    int n=s.size();
    for(int i=0; i<n; i++){
        ns.push_back(s[0]);
    }
    // cout<<s<<" "<<ns;
    // int size=ns.size();
    if(s>ns){
        for(int i=0; i<n; i++){
            char ch=s[0]+1;
            ns[i]=ch;
        }
        cout<<ns<<nl;
    }
    else{
        cout<<ns<<nl;
    }
    
    Love_Byte
}