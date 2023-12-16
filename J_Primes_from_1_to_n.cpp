////////////////////////////////////////
//************************************//
//*         MD SIRAJUL ISLAM         *//
//*           DEPT OF CSE            *//
//*              BAUET               *//
//*           BATCH : 15th           *//
//************************************//
////////////////////////////////////////

#include<bits/stdc++.h>
using namespace std;
int main()
{
    char const nl = '\n';
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    for(int i=2; i<=n; i++){
        int counter=0;
        for(int j=2; j<i; j++){
            if(i%j==0){
                counter=1; break;
            }
        }
        if(counter==0) cout<<i<<" ";
    }
    return 0;
}