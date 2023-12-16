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
    int a,b,counter=1;
    cin>>a>>b;
    while (1)
    {
        a*=3;
        b*=2;
        if(a>b) break;
        else counter+=1;
    }
    cout<<counter<<nl;
    
    return 0;
}