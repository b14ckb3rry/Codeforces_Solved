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
        int n,t; cin>>n>>t;
        int a[n+1];
        int b[n+1];
        for(int i=1; i<n+1; i++){
            cin>>a[i];
        }
        for(int i=1; i<n+1; i++){
            cin>>b[i];
        }
        int index=-1,counter=0,chk=0,ent=0;
        //if(n>2){
            for(int i=1; i<n+1; i++){
                if(a[i]<=t){
                    //counter++;
                    index=i;
                    if(b[i]>chk){
                        ent=i;
                        chk=b[i];
                    }
                    if(b[i]<chk){
                        index=ent;
                    }
                }
                //n--;
                t--;
            }
        //}
        // else{
        //     for(int i=0; i<n; i++){
        //         if(a[i]<=t){
        //             counter++;
        //             index=i;
        //             if(b[i]>chk){
        //                 ent=i;
        //                 chk=b[i];
        //             }
        //             if(b[i]<chk){
        //                 index=ent;
        //             }
        //         }
        //     }
        // }
        //if(index==0) cout<<"-1"<<nl;
        //else cout<<index<<nl;
        cout<<index<<nl;
    }
    
    Love_Byte
}