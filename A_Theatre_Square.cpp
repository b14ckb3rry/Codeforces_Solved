////////////////////////////////////////
//************************************//
//*         MD SIRAJUL ISLAM         *//
//*           DEPT OF CSE            *//
//*              BAUET               *//
//*           BATCH : 15th           *//
//*       ID:0812210205101025        *//
//************************************//
////////////////////////////////////////
#include <bits/stdc++.h>
using namespace std;
    
int main()
{
    const char nl= '\n';
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long a,b,x,y,z;
    cin>>x>>y>>z;
    if(x%z==0) a=x/z;
    else if(x%z!=0) a=(x/z)+1;
    if(y%z==0) b=(y/z);
    else if(y%z!=0) b=(y/z)+1;
    cout<<a*b<<nl;
    
    return 0;
}