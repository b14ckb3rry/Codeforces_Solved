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
    cin.tie(NULL);
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int tc=0, mc=0, bc=0;
        for(int i=0; i<n; i++){
            if(arr[i]%2==0){
                mc+=arr[i];
            }
            else{
                bc+=arr[i];
            }
        }
        if(mc>bc) cout<<"YES"<<nl;
        else cout<<"NO"<<nl;

    }
    
    Love_Byte
}