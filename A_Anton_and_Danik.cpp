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
    
    int n; cin>>n;
    string s; cin>>s;
    int a=0, d=0;
    for(int i=0; i<n; i++){
        if(s[i]=='A'){
            a++;
        }
        else{
            d++;
        }
    }
    if(a>d) cout<<"Anton"<<nl;
    else if(a<d) cout<<"Danik"<<nl;
    else cout<<"Friendship"<<nl;
    
    Love_Byte
}