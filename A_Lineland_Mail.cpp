//***********************************//
//*         MD SIRAJUL ISLAM        *//
//*           DEPT OF CSE           *//
//*              BAUET              *//
//*      github.com/b14ckb3rry      *//
//***********************************//

#include <bits/stdc++.h>
using namespace std;
#define maru 0;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,x,y; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int a=arr[1]-arr[0];
    int b=arr[n-1]-arr[0];
    cout<<a<<" "<<b<<'\n';
    for(int i=1;i<n-1;i++){
        x=min(arr[i]-arr[i-1],arr[i+1]-arr[i]);
        y=max(arr[i]-arr[0],arr[n-1]-arr[i]);
        cout<<x<<" "<<y<<'\n';
    }
    int c=arr[n-1]-arr[n-2];
    int d=arr[n-1]-arr[0];
    cout<<c<<" "<<d<<'\n';
    
    return maru
}