//***********************************//
//*         MD SIRAJUL ISLAM        *//
//*           DEPT OF CSE           *//
//*              BAUET              *//
//*      github.com/b14ckb3rry      *//
//***********************************//

#include <bits/stdc++.h>
using namespace std;
#define maru 0;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // long long n; cin>>n;
    // long long k; cin>>k;
    // queue<long long>v;
    // for(int i=1; i<=n; i++){
    //     if(i%2!=0){
    //         v.push(i);
    //     }
    // }
    // for(int i=1; i<=n; i++){
    //     if(i%2==0){
    //         v.push(i);
    //     }
    // }
    // for(int i=1; i<k; i++){
    //     v.pop();
    // }
    // cout<<v.front()<<'\n';

    long long n,k; cin>>n>>k;
    if (k<=(n+1)/2) cout<<k*2-1<<'\n';
    else cout<<(k-(n+1)/2)*2<<'\n';
    return maru
}