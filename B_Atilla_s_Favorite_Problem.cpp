////////////////////////////////////////
//************************************//
//*         MD SIRAJUL ISLAM         *//
//*           DEPT OF CSE            *//
//*              BAUET               *//
//*           BATCH : 15th           *//
//*       ID:0812210205101025        *//
//************************************//
////////////////////////////////////////
#include <bits/stdc++.h>
using namespace std;

int main()
{
    const char nl= '\n';
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a;
    cin>>a;
    while(a--){
        string s;
        int n;
        cin>>n>>s;
        int res = 0;
        for (int i = 0; i < n; i++){
            res=max(res, s[i]-'a'+1);
        }
        cout<<res<<nl;
        
    }
    return 0;
}