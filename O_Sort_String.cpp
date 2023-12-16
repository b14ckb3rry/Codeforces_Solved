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
    
    int n; cin>>n;
    int pals[26]={0};

    // for(int i=0; i<n; i++){
    //     for(int j=i+1; j<n; j++){
    //         if(s[i]>s[j]){
    //             char temp=s[i];
    //             s[i]=s[j];
    //             s[j]=temp;
    //         }
    //     }
    // }
    for(int i=0; i<n; i++){
        char c; cin>>c;
        pals[c-'a']++;
    }
    for(char i='a'; i<='z'; i++){
        if(pals[i-'a']>0){
            int val=pals[i-'a'];
            for(int j=0; j<val; j++){
                cout<<i;
            }
        }
    }
    //cout<<s<<nl;
    
    Love_Byte
}