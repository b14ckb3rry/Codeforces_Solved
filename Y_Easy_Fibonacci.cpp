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

int main()
{
    const char nl= '\n';
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long n, x=0, y=1; cin>>n;
    if(n==1){
        cout<<"0";
    }
    else{
        cout<<"0 1";
        for(int i=3; i<=n; i++){
            long long temp=x+y;
            cout<<" "<<temp;
            x=y; y=temp;
        }
    }
    
    return 0;
}