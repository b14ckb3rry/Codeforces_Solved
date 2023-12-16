//***********************************//
//*         MD SIRAJUL ISLAM        *//
//*           DEPT OF CSE           *//
//*              BAUET              *//
//*      github.com/b14ckb3rry      *//
//***********************************//

#include <bits/stdc++.h>
using namespace std;
#define maru 0;
typedef long long ll;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll n; cin>>n;
    if(n<=2){
        cout<<n<<endl;
        return 0;
    }
    ll cnt=0;
    for(ll i=1; i*i<=n; i++){
        if(i*i==n){
            cnt++;
        }
        else if(n%i==0){
            cnt+=2;
        }
    }
    cout<<cnt<<'\n';
    
    return maru
}