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
    
    string s; cin>>s;
    int arr[150]={};
    //sort(s.begin(), s.end());
    for(int i=0; i<s.size(); i++){
        arr[s[i]]++;
    }
    for(int i=0; i<150; i++){
        if(arr[i]!=0){
            cout<<(char)i<<" : "<<arr[i]<<nl;
        }
    }
    
    Love_Byte
}