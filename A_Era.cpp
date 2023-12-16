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
    cout.tie(nullptr);
    
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int arr[n+1];
        for(int i=1; i<n+1; i++){
            cin>>arr[i];
        }
        int ans=0;
        for(int i=1; i<n+1; i++){
            ans=max(ans,arr[i]-i);
        }
        cout<<ans<<nl;
    }
    
    Love_Byte
}