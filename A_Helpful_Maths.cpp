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

const char nl= '\n';
#define Love_Byte return 0;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    string s; cin>>s;
    vector<char>v;
    for(int i=0; i<s.size(); i++){
        if(s[i]!='+'){
            v.push_back(s[i]);
        }
    }
    sort(v.begin(), v.end());
    for(int i=0; i<v.size(); i++){
        cout<<v[i];
        if(i==v.size()-1) break;
        else cout<<'+';
    }
    cout<<nl;
    
    Love_Byte
}