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

    string s; cin>>s;
    bool flag=false;
    int x=0, y=0;

    for(int i=0; i<s.size(); i++){
        if(s[i]=='1'){
            x++;
            y=0;
        }
        else{
            y++;
            x=0;
        }
        if(x==7 || y==7){
            flag=true;
            // break;
        }
    }
    if(flag){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
    
    return maru
}