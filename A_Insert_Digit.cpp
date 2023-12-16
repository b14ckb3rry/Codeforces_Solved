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
    int t; cin>>t;
    while(t--){
        int n, digit; cin>>n>>digit;
        string s; cin>>s;
        //for(int i=0; i<n; i++){
        //    cin>>s[i];
        //}
        for(int i=0; i<s.size(); i++){
            if(s[i]<digit+'0'){
                s.insert(i, 1, digit+'0');
                break;
            }
        }
        if(s.size()==n) s.push_back(digit+'0');

        cout<<s<<nl;
    }
    
    Love_Byte
}