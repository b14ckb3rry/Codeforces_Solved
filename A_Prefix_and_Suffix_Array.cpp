//***********************************//
//*         MD SIRAJUL ISLAM        *//
//*           DEPT OF CSE           *//
//*              BAUET              *//
//*      github.com/b14ckb3rry      *//
//***********************************//

#include <bits/stdc++.h>
using namespace std;

const char nl='\n';
#define maru 0;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string s, ch_1, ch_2;
        bool chk=false;
        for(int i=0; i<(2*n-2); i++){
            cin>>s;
            if(s.size()==n-1){
                if(!chk){
                    ch_1=s; chk=true;
                }
                if(chk){
                    ch_2=s;
                }
            }
        }
        reverse(ch_1.begin(), ch_1.end());
        if(ch_1==ch_2) cout<<"YES"<<nl;
        else cout<<"NO"<<nl;
    }
    
    return maru
}