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
        string s; cin>>s;
        int size=s.size();
        int count_a=0, count_b=0;
        for(int i=0; i<size; i++){
            if(s[i]=='a'){
                count_a++;
            }
            if(s[i]=='b'){
                count_b++;
            }
        }
        if(abs(count_a-count_b)==0){
            cout<<"YES"<<nl;
        }
        else{
            cout<<"NO"<<nl;
        }
    }
    
    Love_Byte
}