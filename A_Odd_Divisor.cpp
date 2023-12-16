//***********************************//
//*         MD SIRAJUL ISLAM        *//
//*           DEPT OF CSE           *//
//*              BAUET              *//
//*      github.com/b14ckb3rry      *//
//***********************************//

#include <bits/stdc++.h>
using namespace std;
#define maru 0;

void solve(){
    long long n; cin>>n;

    if(n%2==1) cout<<"YES\n";
    else
    {
        if ((n / 2) % 2 == 1 && (n / 2) > 1)
        {
            cout<<"YES\n";
        }
        else
        {
            bool flag = false;
            while ((n / 2) % 2 != 1 && (n / 2) > 1)
            {
                n /= 2;
                if ((n / 2) % 2 == 1 && (n / 2) > 1)
                {
                    flag = true;
                }
            }
            if (flag)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    for(cin>>t; t; t-=1){
        solve();
    }
    
    return maru
}