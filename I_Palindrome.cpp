////////////////////////////////////////
//************************************//
//*         MD SIRAJUL ISLAM         *//
//*           DEPT OF CSE            *//
//*              BAUET               *//
//*           BATCH : 15th           *//
//*       ID:0812210205101025        *//
//************************************//
////////////////////////////////////////
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char const nl='\n';
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long n, num, remainder, rev=0;
    cin>>n;
    num=n;
    while(n!=0){ ///By this way, we can reverse any number
        remainder=n%10;
        rev=rev*10+remainder;
        n=n/10;
    }
    if(num==rev){
        cout<<num<<nl<<"YES"<<nl;
    }
    else{
        cout<<rev<<nl<<"NO"<<nl;
    }
    return 0;
}
