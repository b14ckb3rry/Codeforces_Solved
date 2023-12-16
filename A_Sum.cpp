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
    int n; cin>>n;
    while(n--){
        int a,b,c;
        cin>>a>>b>>c;

        if((a+b)==c || (a+c)==b || (b+c)==a){
            cout<<"YES"<<nl;
        }
        else{
            cout<<"NO"<<nl;
        }
    }
    
    return 0;
}