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
    
    int t;
    for(cin>>t; t; t-=1){
        int n; cin>>n;
        vector<long long>v;
        while(n--){
            long long a,b; cin>>a>>b;
            v.push_back(a+(b-1)/2);
        }
        sort(v.begin(), v.end());
        cout<<v[0]<<'\n';
    }
    
    return maru
}