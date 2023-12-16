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
        int n; cin>>n;
        string s; cin>>s;
        int counter=0;
        for(int i=0; i<n; i=i+2){
            for(int j=1; j<n; j=j+2){
                if(s[i]==s[j]){
                    counter=1;
                }
            }
        }
        if(counter==1){
            cout<<"NO"<<nl;
        }
        else{
            cout<<"YES"<<nl;
        }
    }
    
    Love_Byte
}