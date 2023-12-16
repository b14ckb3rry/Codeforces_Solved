///////////////////////////////////////
//***********************************//
//*         MD SIRAJUL ISLAM        *//
//*           DEPT OF CSE           *//
//*              BAUET              *//
//*      github.com/b14ckb3rry      *//
//***********************************//
///////////////////////////////////////

#include <bits/stdc++.h>
using namespace std;

const char nl= '\n';
#define maru return 0;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    long long a,b,k; cin>>a>>b>>k;
    if((a%k==0) && (b%k==0)){
        cout<<"Both"<<nl;
    }
    else if((a%k==0) && (b%k!=0)){
        cout<<"Memo"<<nl;
    }
    else if((a%k!=0) && (b%k==0)){
        cout<<"Momo"<<nl;
    }
    else{
        cout<<"No One"<<nl;
    }
    
    maru
}