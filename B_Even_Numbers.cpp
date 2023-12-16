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
    char const nl = '\n';
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, cou=0;
    int i=1;
    cin>>n;
    while(i<=n){
        if(i%2==0){
            cout<<i<<nl;
            cou++;

        }
        i++;
    }
    if(cou==0){
        cout<<"-1"<<nl;
    }
}
