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
    
    int t; cin>>t;
    while(t--){
        long long n; cin>>n;
        long long arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        long long fp=0;
        for(int i=0; i<n; i++){
            long long count=0;
            for(auto x:arr){
                if(min(arr[i],x)<=i && max(arr[i],x)>=i){
                    count++;
                }
            }
            fp+=count;
            cout<<fp<<" ";
        }
        cout<<nl;
    }
    
    return maru
}

