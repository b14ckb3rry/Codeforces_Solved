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
    vector<int>v;
    for(int i=0; i<n; i++){
        int val; cin>>val;
        v.push_back(val);
    }
    // int mini=INT_MAX;
    bool holdZero=false;
    for(int i=0; i<n; i++){
        if(v[i]<0) v[i]*=-1;
        if(v[i]==0) holdZero=true;
    }
    if(holdZero) cout<<0<<nl;
    else{
        // int count=0;
        // mini=abs(mini);
        // while(mini!=0){
        //     mini-=1;
        //     count++;
        // }
        sort(v.begin(), v.end());
        cout<<v[0]<<nl;
    } 
    return maru
}