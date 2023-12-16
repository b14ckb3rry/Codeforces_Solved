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
    
    int n,m; cin>>n>>m;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    bool flag=false; sort(arr, arr+n);
    for(int i=0; i<n; i++){
        if(arr[i]>0){
            flag=true;
        }
    }
    int res=0;
    if(flag){
        for(int i=0; i<m; i++){
            if(arr[i]<0){
                res+=arr[i];
            }
        }
    }
    else{
        for(int i=0; i<m; i++){
            res+=arr[i];
        }
    }
    cout<<abs(res)<<'\n';
    
    return maru
}