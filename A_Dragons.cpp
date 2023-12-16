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

const char nl= '\n';
#define Love_Byte return 0;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int st,drag,dragst,bonus; cin>>st>>drag;
    vector<pair<int, int>>vec(drag);
    for(int i=0; i<drag; i++){
        cin>>vec[i].first>>vec[i].second;
    }
    sort(vec.begin(), vec.end());
    for(int i=0; i<drag; i++){
        if(st>vec[i].first){
            st+=vec[i].second;
        }
        else{
            cout<<"NO"<<nl;
            Love_Byte
        }
    }
    cout<<"YES"<<nl;
    
    Love_Byte
}