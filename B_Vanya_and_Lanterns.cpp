//***********************************//
//*         MD SIRAJUL ISLAM        *//
//*           DEPT OF CSE           *//
//*              BAUET              *//
//*      github.com/b14ckb3rry      *//
//***********************************//

#include <bits/stdc++.h>
using namespace std;

const char nl='\n';
#define maru 0;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,l; cin>>n>>l;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr, arr+n);
    int d=2 * max(arr[0], l-arr[n-1]);
    for(int i=1; i<n; i++){
        d=max(d,(arr[i]-arr[i-1]));
    }
    cout<<fixed<<setprecision(10)<<(double)d/2;
    
    return maru
}