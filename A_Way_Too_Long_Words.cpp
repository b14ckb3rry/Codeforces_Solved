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
#define hardly_done return 0;

int main()
{
    const char nl= '\n';
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a;
    cin>>a;
    string st[a];
    for (int i = 0; i < a; i++){
        cin>>st[i];
    }  
    for (int j = 0; j < a ; j++){
        if(st[j].size()>10){
            //int first_letter = st[j][0];     Error using this siquance
            //int find_size=st[j].size()-2;
            //int last_latter=st[j][st[j].size()-1];
            cout<<st[j][0]<<st[j].size()-2<<st[j][st[j].size()-1]<<nl;
        }
        else{
            cout<<st[j]<<nl;
        }
    }
    hardly_done
}