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
    cin.tie(NULL);
    int n,a,b,c; cin>>n;
    for(int i=1; i<=n; i++){
        cin>>a>>b>>c;
        if((a+b)==c){
            cout<<'+'<<nl;
        }
        else if((a-b)==c){
            cout<<'-'<<nl;
        }
    }
    
    Love_Byte
}