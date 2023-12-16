//***********************************//
//*         MD SIRAJUL ISLAM        *//
//*           DEPT OF CSE           *//
//*              BAUET              *//
//*      github.com/b14ckb3rry      *//
//***********************************//

#include <bits/stdc++.h>
using namespace std;
#define maru 0;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int arr[n];
        int mini=INT_MAX;
        int index;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            if(arr[i]<mini){
                mini=arr[i];
                index=i;
            }
        }
        arr[index]=arr[index]+1;
        // cout<<arr[index];
        int mul=1;
        for(int i=0; i<n; i++){
            mul=mul*arr[i];
        }
        cout<<mul<<'\n';
    }
    
    return maru
}