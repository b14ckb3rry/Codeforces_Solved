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
    int n; cin>>n;
    int x, pcnt=0, ccnt=0;
    while(n--){
        cin>>x;
        if(x==-1 && pcnt==0){
            ccnt++;
            continue;
        }
        else if(x==-1 && pcnt>0){
            pcnt--;
            continue;
        }
        else{
            pcnt+=x;
        }
    }
    cout<<ccnt<<nl;
    
    Love_Byte
}