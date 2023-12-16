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
    long long n;
    long long count=0;
    cin>>n;
    for(int i=2; i<=n; i++){
        if(n%i==0){
        count+=1;
        }
    }
    if(count==1){
        cout<<"YES"<<nl;
    }
    else{
        cout<<"NO"<<nl;
    }
    return 0;
}
