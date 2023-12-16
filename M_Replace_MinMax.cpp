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
    cin.tie(NULL);
    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int max=arr[0];
    int in1=0;
    for(int i=0; i<n; i++){
        if(arr[i]>max){
            max=arr[i];
            in1=i;
        }
    }
    int min=arr[0];
    int in2=0;
    for(int i=0; i<n; i++){
        if(arr[i]<min){
            min=arr[i];
            in2=i;
        }
    }
    arr[in2]=max;
    arr[in1]=min;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    
    Love_Byte
}