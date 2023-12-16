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
    cin.tie(NULL);
    int r, c; cin>>r>>c;
    int arr[r][c];
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin>>arr[i][j];
        }
    }
    int n; cin>>n;
    int flag=0;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(arr[i][j]==n){
                flag=1;
            }
        }
    }
    if(flag==1){
        cout<<"will not take number"<<nl;
    }
    else{
        cout<<"will take number"<<nl;
    }
    
    Love_Byte
}