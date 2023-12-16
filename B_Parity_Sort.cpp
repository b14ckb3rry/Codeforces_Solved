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
#define maru 0;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int>v(n);
        // for(int i=0; i<n; i++){
        //     int x; cin>>x;
        //     arr[i]=x;
        //     chk[i]=x;
        // }
        // for(int i=0; i<n; i++){
        //     for(int j=i+1; j<n; j++){
        //         if(arr[i]>arr[j]){
        //             if(arr[i]%2==0 && arr[j]%2==0){
        //                 swap(arr[i], arr[j]);
        //             }
        //             else if(arr[i]%2!=0 && arr[j]%2!=0){
        //                 swap(arr[i], arr[j]);
        //             }
        //         }
        //     }
        // }
        // for(auto x:arr){
        //     cout<<x<<" ";
        // }
        // cout<<nl;
        for(int i=0; i<n; i++){
            cin>>v[i];
        }
        auto comp=v;
        bool flag=true;
        sort(comp.begin(), comp.end());
        for(int i=0; i<n; i++){
            flag&=(v[i]%2==comp[i]%2);
        }
        if(flag) cout<<"YES"<<nl;
        else cout<<"NO"<<nl;
    }
    return maru
}

