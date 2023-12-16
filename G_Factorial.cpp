////////////////////////////////////////
//************************************//
//*         MD SIRAJUL ISLAM         *//
//*           DEPT OF CSE            *//
//*              BAUET               *//
//*           BATCH : 15th           *//
//*      github.com/b14ckb3rry       *//
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
    int a;
    int counter=1;
    cin>>a;
    for(int i=1; i<=a; i++){
        int n;
        cin>>n;
        for(int j=1; j<=n; j++){
            counter=counter*j;
    }
    cout<<counter<<nl;
    counter=1;
    }
    return 0;
}
