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
#define maru 0;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin>>n;
    int a[15][15];
    for(int i=1; i<=1; i++){
        for(int j=1; j<=n; j++){
            a[i][j]=1;
        }
    }
    for(int i=2; i<=n; i++){
        a[i][1]=1;
        for(int j=2; j<=n; j++){
            a[i][j]=a[i-1][j]+a[i][j-1];
        }
    }
    cout<<a[n][n]<<nl;
    
    return maru
}