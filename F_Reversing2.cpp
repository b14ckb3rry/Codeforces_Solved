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

#define Love_Byte return 0;
const char nl= '\n';

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int>vec;
    int n,a; cin>>n;
    for(int i=0; i<n; i++){
        cin>>a;
        vec.push_back(a);
    }

    for(int i=n-1; i>=0; i--){
        cout<<vec[i]<<" ";
    }
    Love_Byte
}