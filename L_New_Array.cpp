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
#define Love_Byte return 0;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n; cin>>n;
    int arr[n];
    int arr2[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        cin>>arr2[i];
    }
    vector<int>v(arr2, arr2+n);
    for(int i=0; i<n; i++){
        v.push_back(arr[i]);
    }
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }

    cout<<nl;
    
    Love_Byte
}