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
    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        if(arr[i]<=10){
            cout<<"A"<<"["<<i<<"]"<<" "<<"="<<" "<<arr[i]<<nl;
        }
    }
    
    return 0;
}