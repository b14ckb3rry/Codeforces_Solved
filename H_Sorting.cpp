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

    vector<int>vec;
    int n; cin>>n;
    for(int i=0; i<n; i++){
        int a; cin>>a;
        vec.push_back(a);
    }
    sort(vec.begin(), vec.end());
    for(int i=0; i<n; i++){
        cout<<vec[i]<<" ";
    }

    //Buble Sorting Concept Applied
    ///NOT WORKING THAT METHODE

    // int n; cin>>n;
    // int arr[n];
    // for(int i=0; i<n; i++){
    //     cin>>arr[i];
    // }
    // int flag=1;
    // while(flag<n-1){
    //     for(int i=0; i<n-flag; i++){
    //         if(arr[i]>arr[i+1]){
    //             int temp=arr[i];
    //             arr[i]=arr[i+1];
    //             arr[i+1]=temp;
    //         }
    //     }
    //     flag++;
    // }
    // for(int i=0; i<n; i++){
    //     cout<<arr[i]<<" ";
    // }
    
    return 0;
}