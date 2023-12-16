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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s; cin>>s;
    int n=s.size();
    transform(s.begin(), s.end(), s.begin(), ::tolower);

    // for(int i=0; i<n; i++){
    //     if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='y'){
    //         s[i]='.';
    //     }
    // }
    // if(s[n-1]=='.') s[n-1]=' ';
    // if(s[0]!='.') cout<<'.';
    // cout<<s;
    string soln="";
    for(auto i:s){
        if(i=='a' || i=='e' || i=='i' || i=='o' || i=='o' || i=='u' || i=='y'){
            continue;
        }
        else{
            soln=soln+'.';
            soln=soln+i;
        }
    }
    cout<<soln;
    
    return 0;
}