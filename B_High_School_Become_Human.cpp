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

void solve(long a, long b){
    // long long com=(a*log(b));
    // long long com2=(b*log(a));
    if((a*log(b))<(b*log(a))){
        cout<<">"<<nl;
    }
    else if((a*log(b))>(b*log(a))){
        cout<<"<"<<nl;
    }
    else{
        cout<<"="<<nl;
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    long a,b; cin>>a>>b;
    solve(a,b);
    
    Love_Byte
}
