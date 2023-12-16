///////////////////////////////////////
//***********************************//
//*         MD SIRAJUL ISLAM        *//
//*           DEPT OF CSE           *//
//*              BAUET              *//
//*      github.com/b14ckb3rry      *//
//***********************************//
///////////////////////////////////////

#include <bits/stdc++.h>
using namespace std;

const char nl= '\n';
#define Love_Byte return 0;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n,t; cin>>n>>t;
    long long arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    long long pref[n];
    pref[0]=arr[0];
    for(int i=1; i<n; i++){
        pref[i]=arr[i]+pref[i-1];
    }
    while(t--){
        long long a,b; cin>>a>>b;
        a--; b--;
        if(a==0) cout<<pref[b]<<nl;
        else cout<<pref[b]-pref[a-1]<<nl;
    }
    
    Love_Byte
}