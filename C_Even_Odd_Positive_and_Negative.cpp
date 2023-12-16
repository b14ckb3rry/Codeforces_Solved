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
    int a;
    int neg=0, pos=0, od=0, ev=0;
    cin>>a;
    for(int i=1; i<=a; i++){
        int n;
        cin>>n;
        if(n<0){
        neg+=1;
        }
        if(n>=1){
            pos+=1;
        }
        if(n%2==0){
            ev+=1;
        }
        if(n%2!=0){
            od+=1;
        }

    }
    cout<<"Even: "<<ev<<nl<<"Odd: "<<od<<nl<<"Positive: "<<pos<<nl<<"Negative: "<<neg<<nl;
    return 0;
}
