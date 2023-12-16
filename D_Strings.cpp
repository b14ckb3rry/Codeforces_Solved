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
    
    string s, s1; cin>>s>>s1;
    cout<<s.size()<<' '<<s1.size()<<nl;
    cout<<s<<s1<<nl;
    char temp=s[0];
    s[0]=s1[0];
    s1[0]=temp;
    cout<<s<<' '<<s1;
    
    Love_Byte
}