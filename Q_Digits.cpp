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
    int a; cin>>a;
    for(int loop=1; loop<=a; loop++){
        //long long n; cin>>n;
        //long long last=0;
        // while(n!=0){
        //     last=n%10;
        //     n/=10;               Wrong answer in test 9
        //     cout<<last<<" ";
        // }
        // cout<<nl;


        string n; cin>>n;
        for(int i=n.size()-1; i>=0; i--){
            cout<<n[i]<<" ";
        }
        cout<<nl;
    }
    
    return 0;
}

