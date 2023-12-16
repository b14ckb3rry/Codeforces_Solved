///////////////////////////////////////
//***********************************//
//*         MD SIRAJUL ISLAM        *//
//*           DEPT OF CSE           *//
//*              BAUET              *//
//*      github.com/b14ckb3rry      *//
//***********************************//
///////////////////////////////////////

#include <bits/stdc++.h>
using namespace std;

const char nl= '\n';
#define maru 0;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long bill; cin>>bill;
    long long billCount=0;
    while(bill>0){
        if(bill>=100){
            billCount++;
            bill-=100;
        }
        else if(bill>=20 && bill<100){
            billCount++;
            bill-=20;
        }
        else if(bill>=10 && bill<20){
            billCount++;
            bill-=10;
        }
        else if(bill>=5 && bill<10){
            billCount++;
            bill-=5;
        }
        else{
            billCount++;
            bill-=1;
        }
    }
    cout<<billCount<<nl;
    
    return maru
}