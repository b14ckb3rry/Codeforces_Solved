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

#define Love_Byte return 0;
const char nl= '\n';

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, res=0;
    string s; cin>>n>>s;
    for(int i=0; i<n; i++){
        res+=((int)s[i]-'0');
    }
    cout<<res<<nl;
    
    Love_Byte
}