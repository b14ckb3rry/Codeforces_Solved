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

#define Love_Byte return 0;
const char nl= '\n';

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int>vec;
    int n; cin>>n;
    for(int i=0; i<n; i++){
        int a; cin>>a;
        vec.push_back(a);
    }
    reverse(vec.begin(), vec.end());
    for(auto x:vec){
        cout<<x<<" ";
    }

    Love_Byte
}