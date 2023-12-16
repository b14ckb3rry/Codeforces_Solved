////////////////////////////////////////
//************************************//
//*         MD SIRAJUL ISLAM         *//
//*           DEPT OF CSE            *//
//*              BAUET               *//
//*           BATCH : 15th           *//
//*       ID:0812210205101025        *//
//************************************//
////////////////////////////////////////
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char const nl='\n';
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long a,b,c,d,mul,last;
    cin>>a>>b>>c>>d;
    a=a%100; b=b%100; c=c%100; d=d%100;
    mul = a*b*c*d;
    if(mul%100<=9) cout<<0;
    cout<<mul%100;
    return 0;
}
