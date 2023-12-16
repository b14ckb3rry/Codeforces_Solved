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
    
    int n; cin>>n;
    while(n--){
        string s; cin>>s;
        int size = s.size();
        for(int i=0; i<size-1; i+=2){
            cout<<s[i];
        }
        cout<<s[size-1]<<nl;
    }
    
    Love_Byte
}