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
    long long n, sum=0;
    cin>>n;
    // for(int i=1; i<=n; i++){
    //     if(i%2==0){
    //         sum+=i;
    //     }                             Time limit exceeded on test 5
    //     else{
    //         sum-=i;
    //     }
    // }
    // cout<<sum<<nl;


    if(n%2==0) sum=n/2;
    else sum=((n+1)/2)*(-1);
    cout<<sum<<nl;
    
    return 0;
}