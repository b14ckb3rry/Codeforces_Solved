//***********************************//
//*         MD SIRAJUL ISLAM        *//
//*           DEPT OF CSE           *//
//*              BAUET              *//
//*      github.com/b14ckb3rry      *//
//***********************************//

#include <bits/stdc++.h>
using namespace std;
#define maru 0;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        if(s=="abc") cout<<"YES\n";
        else if(s[0]=='a' && s[1]=='b') cout<<"YES\n";
        else if(s[0]=='a' && s[1]=='c') cout<<"YES\n";
        else if(s[0]=='b' && s[1]=='a') cout<<"YES\n";
        else if(s[0]=='c' && s[1]=='b') cout<<"YES\n";
        else cout<<"NO\n";
    }
    
    return maru
}