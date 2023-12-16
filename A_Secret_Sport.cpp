//***********************************//
//*         MD SIRAJUL ISLAM        *//
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
        string s; cin>>s;
        // int a=0, b=0;
        // for(int i=0; i<n; i++){
        //     if(s[i]=='A') {
        //         a++;
        //     }
        //     else{
        //         b++;
        //     }
        // }
        // if(a>b){
        //     cout<<"A\n";
        // }
        // else{
        //     cout<<"B\n";
        // }
        if(s[n-1]=='B') cout<<"B\n";
        else if(s[n-1]=='A') cout<<"A\n";
        else cout<<"?\n";
    }
    
    return maru
}