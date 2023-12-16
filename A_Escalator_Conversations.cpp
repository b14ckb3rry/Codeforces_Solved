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
        int n,m,k,h; cin>>n>>m>>k>>h;
        int arr[n];
        vector<int>vec;
        for(int i=0; i<n; i++){
            int x; cin>>x;
            arr[i]=x;
        }
        for(int i=1; i<=m; i++){
            vec.push_back(i*k);
        }
        int maxi=*max_element(vec.begin(), vec.end());
        int count=0;
        for(int i=0; i<n; i++){
            int _=arr[i]-h;
            if(_<0){
                _=_*(-1);
            }
            for(auto val:vec){
                if(val==_ && val!=maxi){
                    count+=1; break;
                }
            }
        }
        cout<<count<<nl;
    }
    return maru
}