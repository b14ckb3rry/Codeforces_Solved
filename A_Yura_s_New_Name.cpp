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
        string s;
        int count=0; 
        cin>>s;
        s=' '+s+' ';
        int size= s.size();
        for(int i=1; i<size-1; i++) {
            if(s[i]=='_' && s[i-1]!='^') count++;
            if(s[i]=='_' && s[i+1]==' ') count++;
            if(s[i]=='^' && s[i-1]==' ' && s[i+1]==' ') count++;
        }
        cout<<count<<nl;
    }
    
    Love_Byte
}