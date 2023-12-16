////////////////////////////////////////
//************************************//
//*         MD SIRAJUL ISLAM         *//
//*           DEPT OF CSE            *//
//*              BAUET               *//
//*           BATCH : 15th           *//
////////////////////////////////////////
#include <bits/stdc++.h>
using namespace std;

int main()
{
    const char nl= '\n';
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n; cin>>n;
    while(n--){
        int a,b; cin>>a>>b;
        int res=0;
        if(a>b){
            int temp=a;
            a=b;
            b=temp;
        }
        for(int i=a+1; i<b; i++){
            if(i%2) res+=i;
        }
        cout<<res<<nl;
    }
    
    return 0;
}