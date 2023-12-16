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
#define softly_done return 0;

int main()
{
    const char nl= '\n';
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    int counter=0;
    cin>>s;
    sort(s.begin(), s.end());
    for (int i = 0; i < s.size(); i++){
        if(s[i] != s[i+1]){
            counter++;
        }
    }
    
    if(counter%2==0){
        cout<<"CHAT WITH HER!"<<nl;
    }
    else{
        cout<<"IGNORE HIM!"<<nl;
    }
    
    softly_done
}