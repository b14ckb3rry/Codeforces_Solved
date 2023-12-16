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
    int count=0, cube_count=0, layer_count=0;
    int i=0;
    while(true){
        i++;
        cube_count+=i;
        layer_count+=cube_count;
        if(layer_count<=n){
            count++;
        }
        else{
            break;
        }
    }
    cout<<count<<nl;
    
    Love_Byte
}