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

void solve(int x, int n){
    long long sum=0;
    if(n%2!=0){
        for(int i=2; i<n; i+=2){
            sum+=pow(x,i);
        }
    }else{
        for(int i=2; i<=n; i+=2){
        sum+=pow(x,i);
        }
    }
    cout<<sum<<nl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int x,n; cin>>x>>n;
    solve(x,n);
    
    Love_Byte
}