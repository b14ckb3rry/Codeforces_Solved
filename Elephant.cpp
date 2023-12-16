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
    int n;
    int counter=0;
    cin>>n;
    if(n%5==0){
        counter=n/5;
        cout<<counter<<nl;
    }
    else{
        counter=(n/5)+1;
        cout<<counter<<nl;
    }
    return 0;
}
