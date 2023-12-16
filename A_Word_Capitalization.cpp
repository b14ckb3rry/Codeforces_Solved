////////////////////////////////////////
//************************************//
//*         MD SIRAJUL ISLAM         *//
//*           DEPT OF CSE            *//
//*              BAUET               *//
//*           BATCH : 15th           *//
//************************************//
////////////////////////////////////////
#include<bits/stdc++.h>
using namespace std;

const char nl='\n';

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s; cin>>s;
    if(s[0]>=97 && s[0]<=122){
        s[0]-=32;
    }
    cout<<s<<nl;
    return 0;
}