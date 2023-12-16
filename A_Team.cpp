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
    int a,x,y,z;
    int count=0;
    cin>>a;
    for(int l=1; l<=a; l++){
        cin>>x>>y>>z;
        int sum=x+y+z;
        if(sum>=2) count+=1;
    }
    cout<<count<<nl;
    return 0;
}