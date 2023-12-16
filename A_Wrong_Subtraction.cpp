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
    long long n, k, counter;
    cin>>n>>k;
    for(int i=1; i<=k; i++){
        if(n%10==0){
            counter=n/10;
        }
        else{
            counter=n-1;
        }
        n=counter;
    }
    cout<<counter<<nl;
    return 0;
}