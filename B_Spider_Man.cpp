////////////////////////////////////////
//************************************//
//*         MD SIRAJUL ISLAM         *//
//*           DEPT OF CSE            *//
//*              BAUET               *//
//*           BATCH : 15th           *//
//************************************//
////////////////////////////////////////

#include <bits/stdc++.h>
using namespace std;

const char nl= '\n';
#define Love_Byte return 0;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n; cin>>n;
    long long arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int res[n];
    int sum=0;
    for(int i=0; i<n; i++){
        sum+=arr[i]-1;
        if(sum%2==0){
            res[i]=2;
        }
        else{
            res[i]=1;
        }
    }
    for(int i=0; i<n; i++){
        cout<<res[i]<<nl;
    }
    Love_Byte
}