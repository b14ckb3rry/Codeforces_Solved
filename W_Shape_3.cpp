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
    for(int i=1; i<=a; i++){
        for(int j=i; j<a; j++){
            cout<<" ";
        }
        for(int k=1; k<=i*2-1; k++){
            cout<<"*";
        }
        cout<<nl;
    }
    for(int i=a; i>=1; i--){
        for(int j=i; j<a; j++){
            cout<<" ";
        }
        for(int k=1; k<=i*2-1; k++){
            cout<<"*";
        }
        cout<<nl;
    }
    
    return 0;
}