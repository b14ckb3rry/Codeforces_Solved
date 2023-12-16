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
        int odd=0, even=0;
        for(int i=0; i<n; i++){
            if(arr[i]%2==0){
                even++;
            }
            else{
                odd++;
            }
        }
        if(n%2!=0){
            cout<<"-1"<<nl;
        }
        else{
            int half=n/2;
            int stO=odd-half;
            int stE=even-half;
            int mn=min(stO, stE);
            if(mn<0) mn*=(-1);
            cout<<mn<<nl;
        }
    }
    
    Love_Byte
}