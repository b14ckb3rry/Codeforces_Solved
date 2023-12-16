//***********************************//
//*         MD SIRAJUL ISLAM        *//
//*           DEPT OF CSE           *//
//*              BAUET              *//
//*      github.com/b14ckb3rry      *//
//***********************************//

#include <bits/stdc++.h>
using namespace std;
#define maru 0;
#define nl endl;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while(t--){
        int k,n,m; cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int res=0;
        for(int i=1;i<n;i++){
            res+=(arr[i]<=arr[i-1]);
        }
        int cur=res;
        for(int i=0;i<n-1;i++){
            cur-=(arr[i]>=arr[i+1]);
            if(i>0){
                cur+=(arr[i]>=arr[i-1]);
            }
            res=min(res,cur+1);
        }   
        cout<<res<<'\n';
    }
    return maru
}