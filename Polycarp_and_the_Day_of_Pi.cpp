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
    string pi="314159265358979323846264338327";
    string comp;
    int a;
    cin>>a;
    for(int test_case=0; test_case<a; test_case++){
        int counter=0;
        cin>>comp;
        for(int j=0,k=0; j<comp.length(), k<pi.length(); j++, k++){
            if(pi[k]==comp[j]){
                counter+=1;
            }
            else{
                break;
            }
        }
        cout<<counter<<nl;
    }
    return 0;
}
