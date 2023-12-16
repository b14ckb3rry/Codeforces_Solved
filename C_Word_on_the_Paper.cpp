///////////////////////////////////////
//***********************************//
//*         MD SIRAJUL ISLAM        *//
//*           DEPT OF CSE           *//
//*              BAUET              *//
//*      github.com/b14ckb3rry      *//
//***********************************//
///////////////////////////////////////

#include <bits/stdc++.h>
using namespace std;

const char nl='\n';
#define maru 0;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while(t--){
        vector<char>v;
        for(int i=0; i<64; i++){
            char ch; cin>>ch;
            if(ch!='.') v.push_back(ch);
        }
        for(auto x:v){
            cout<<x;
        }
        // while(cin>>s){
        //     for(int i=0; i<s.length(); i++){
        //         if(isalpha(s[i])) cout<<s[i];
        //     }
        // }
        cout<<nl;
    }
    
    return maru
}