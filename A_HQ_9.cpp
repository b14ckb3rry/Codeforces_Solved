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
    int flag=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]>=33 && s[i]<=126){
        if(s[i]=='H'||s[i]=='Q'||s[i]=='9'){
            flag=1;
        }
    }
    }
    if(flag){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
    return maru
}