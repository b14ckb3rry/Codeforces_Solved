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
    
    int t;
    for(cin>>t; t; t-=1) {
        int n; string s; cin>>n>>s;
        int x=count(s.begin(),s.end(),'W');
        if(x==n){
            cout<<"YES\n";
            continue;
        }
        if(n==1 || (n==2 && (s[0]=='W' || s[1]=='W'))){
            cout<<"NO\n";
            continue;
        }

        bool B=false, R=false, flag=false;
        for(int i=0 ; i<n; i++){
            if(s[i]=='W'){
                if(B && R){
                    B=false;
                    R=false;
                    continue;
                }
                else if(!B && !R){
                    continue;
                }
                else{
                    cout<<"NO\n";
                    flag=true;
                    break;
                }
            }
            else if(s[i]=='R') R=true;
            else if(s[i]=='B') B=true;
        }
        if(flag) continue;
        if(B && !R) cout<<"NO\n";
        else if(!B && R) cout<<"NO\n";
        else cout<<"YES\n";
    }
    
    return maru
}