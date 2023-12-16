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
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        int n, count=0, res; cin>>n;
        //int arr[n];
        string s=to_string(n);
        for(int i=1; i<=s.size(); i++){
            res=((n%10)-1)*10;
            count+=i;
        }
        cout<<res+count<<nl;
    }
    
    Love_Byte
}