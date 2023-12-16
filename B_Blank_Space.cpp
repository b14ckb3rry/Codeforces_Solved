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
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int flag=0, zero=0;
        // for(int i=0; i<n; i++){
        //     if(arr[i]==0 && arr[i+1]==0){
        //         flag++;
        //         continue;
        //     }
        //     if(arr[i]==0){
        //         flag++;
        //         break;
        //     }
        // }
        for(int i=0; i<n; i++){
            if(arr[i]==0){
                zero++;
            }
            else{
                flag=max(flag, zero);
                zero=0;
            }
        }
        flag=max(flag, zero);
        cout<<flag<<nl;
    }
    
    Love_Byte
}
