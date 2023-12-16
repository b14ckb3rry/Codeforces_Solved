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
    for(int i=1; i<=n; i++){
        if(i%2!=0){
            cout<<"I hate ";
        }
        else{
            cout<<"I love ";
        }
        if(i==n){
            cout<<"it";
            continue;
        }
        cout<<"that ";
    }
    
    Love_Byte
}