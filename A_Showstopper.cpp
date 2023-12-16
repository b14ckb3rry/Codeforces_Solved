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
    
    int t; cin>>t;
    while(t--){ 
        int n; cin>>n;
        int ar[n];
        int arr[n];
        int ar_max=0, arr_max=0;
        for(int i=0; i<n; i++){
            cin>>ar[i];
        }
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        for(int i=0; i<n; i++){
            if(arr[i]<ar[i]){
                swap(ar[i], arr[i]);
            }
            ar_max=max(ar_max, ar[i]);
            arr_max=max(arr_max, arr[i]);
        }
        if(ar_max==ar[n-1] && arr_max==arr[n-1]) cout<<"Yes"<<nl;
        else cout<<"No"<<nl;
    }
    Love_Byte
}