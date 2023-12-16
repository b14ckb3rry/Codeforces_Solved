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
    cout.tie(nullptr);

    string s;
    getline(cin,s);
    int count=0;
    bool foundWord=false;
    for(char c:s){
        if((c>='a' && c<='z') || (c>='A' && c<='Z')){
            if(foundWord==false){
                count++;
            }
            foundWord=true;
        }
        else{
            foundWord=false;
        }
    }
    cout<<count<<nl;
    Love_Byte
}