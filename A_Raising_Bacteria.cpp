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
    
    int n; cin>>n;
    string s=bitset<4*8>(n).to_string();
    int count=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='1'){
            count++;
        }
    }
    cout<<count<<nl;

    return maru
}