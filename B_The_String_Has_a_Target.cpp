////////////////////////////////////////
//************************************//
//*         MD SIRAJUL ISLAM         *//
//*           DEPT OF CSE            *//
//*              BAUET               *//
//*           BATCH : 15th           *//
//************************************//
////////////////////////////////////////

#include <bits/stdc++.h>
using namespace std;

const char nl= '\n';
#define Love_Byte return 0;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string s; cin>>s;
        // for(int i=0; i<n; i++){
        //     cin>>s[i];
        // }
        char ch=*min_element(s.begin(),s.end());
        // for(int i=0; i<n; i++){
        //     if(s[i]<s[i+1]){
        //         ch=s[i];
        //     }
        // }
        int index=0;
        for(int i=0; i<n; i++){
            if(ch==s[i]){
                index=i;
            }
        }
        cout<<ch;
        for(int i=0; i<n; i++){
            if(i!=index){
                cout<<s[i];
            }
        }
        cout<<nl;
    }
    
    Love_Byte
}