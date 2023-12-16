//***********************************//
//*         MD SIRAJUL ISLAM        *//
//*           DEPT OF CSE           *//
//*              BAUET              *//
//*      github.com/b14ckb3rry      *//
//***********************************//

#include <bits/stdc++.h>
using namespace std;

const char nl='\n';
#define maru 0;

bool Cube(long long x){
    long long cubeRoot=cbrt(x);
    while(cubeRoot*cubeRoot*cubeRoot>x){
        cubeRoot--;
    }
    while(cubeRoot*cubeRoot*cubeRoot<x){
        cubeRoot++;
    }
    if(cubeRoot*cubeRoot*cubeRoot==x){
        return true;
    }
    return false;
}

void solve(){
    long long x; cin>>x;
    long long sum=0;
    for(long long i=1; i<10005; i++){
        sum=x-(i*i*i);
        if(sum<=0){
            break;
        }
        if(Cube(sum)){
            cout<<"YES"<<'\n';
            return;
        }
    }
    cout<<"NO"<<'\n';
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while(t--){
        solve();
    }
    
    return maru
}