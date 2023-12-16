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
    int a, x=0;
    string st;
    cin>>a;
    for(int i=1; i<=a; i++){
        cin>>st;
        if(st[1]=='+') x++;
        else x--;
    }
    cout<<x<<nl;
    return 0;
}