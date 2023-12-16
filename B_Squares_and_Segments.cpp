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

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long n; cin>>n;
    long long res=0, counter=2;
    while(true){
        res=counter/2*(counter/2+(counter%2!=0));
        if(res>=n){
            res=counter;
            break;
        }
        counter++;
    }
    cout<<res<<nl;
    
    return maru
}