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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n=0;
        for(int i=1; i<=5; ++i){
            for(int j=1; j<=5; ++j){
                cin>>n;
                if(n==1){
                    cout<<abs(i-3)+abs(j-3)<<nl;
                }
            }
        }
    
    return 0;
}