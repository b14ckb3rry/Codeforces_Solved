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
    int n,p; cin>>n>>p;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int counter=0;
    for(int i=0; i<n; i++){
        if(arr[i]==0){
            counter++;
        }
    }
    int flag=0;
    for(int i=0; i<n; i++){
        if(arr[i]>0 && arr[i]>=arr[p-1]){
            flag++;
        }
    }
    if(counter==n) cout<<"0"<<nl;
    else cout<<flag<<nl;
    
    Love_Byte
}