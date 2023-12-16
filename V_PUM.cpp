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
    int a;
    cin>>a;
    /*for(int i=1; i<=a; i++){
        for(int j=1; j<=3; j++){
            cout<<i<<" ";
        }
        cout<<"PUM"<<nl;
        if(4%i!=0){
            i+=1;
        }
    }*/
    /*while(a--){
        for(int i=1; i<=a; i++){
            for(int j=1; j<=a; j++){
                cout<<j<<" ";
            }
            cout<<"PUM"<<nl;
        }
    }*/

    for(int i=1; i<=a*4; i++) {
        if(i%4==0){
            cout<<"PUM"<<nl;
        } else {
            cout<<i<<" ";
        }
    }
    
    return 0;
}