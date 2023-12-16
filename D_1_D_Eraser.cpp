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
        int n,k; cin>>n>>k;
        string s; cin>>s;
        int res=0;
        for(int i=0; i<n; i++) {
            if(s[i]=='B') {
                i+=(k-1);
                res++;
            }
        }
        cout<<res<<'\n';
    }
    return maru
}