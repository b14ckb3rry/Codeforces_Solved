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

int main()
{
    const char nl= '\n';
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    char ch;
    int n,a;
    cin>>ch>>n;
    for(int i=1; i<=n; i++){
        cin>>a;
        for(int j=1; j<=a; j++){
            cout<<ch;
        }
        cout<<nl;
    }
    
    return 0;
}