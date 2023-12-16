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
    char com;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>com;
        if(com=='c'||com=='o'||com=='d'||com=='e'||com=='f'||com=='o'||com=='r'||com=='c'||com=='e'||com=='s')
        {
            cout<<"YES"<<nl;
        }
        else{
            cout<<"NO"<<nl;
        }
    }
    return 0;
}