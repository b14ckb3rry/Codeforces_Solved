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
    
    string s, s1, new_s; cin>>s>>s1;
    int l,l1;
    l=s.size(); l1=s1.size();
    int mini=min(l,l1);
    for(int i=0; i<mini; i++){
        if(s[i]<s1[i]){
            new_s=s;
            break;
        }
        else if(s[i]>s1[i]){
            new_s=s1;
            break;
        }
    }
    if(new_s==""){
        if(l<l1){
            new_s=s;
        }
        else{
            new_s=s1;
        }
    }
    cout<<new_s<<nl;
    
    Love_Byte
}