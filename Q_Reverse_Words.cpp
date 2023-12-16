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
#define maru return 0;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    string s;
    vector<string>v;
    while(cin>>s){
        reverse(s.begin(), s.end());
        v.push_back(s);
    }
    int count=0;
    for(auto x:v){
        cout<<x;
        if(count!=v.size()-1){
            cout<<" ";
        }
        count++;
    }
    cout<<nl;
    
    maru
}