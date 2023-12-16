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
    
    int n,t; cin>>n>>t;
    if(n==1 && t>=10) cout<<"-1\n";
    else{
        if(t==10){
            cout<<"1";
            for(int i=0; i<n-1; i++){
                cout<<"0";
            }
        }
        else{
            for(int i=0; i<n; i++){
                cout<<t;
            }
        }
    }
    cout<<'\n';
    
    return maru
}