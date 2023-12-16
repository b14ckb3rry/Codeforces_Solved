#include <bits/stdc++.h>
using namespace std;

const char nl= '\n';
#define Love_Byte return 0;

int BinarySearch(int arr[], int n, int key){
    int start=0, end=n-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return -1;
}

int32_t main()
{
    //ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, t; cin>>n>>t;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr, arr+n);
    while(t--){
        int key; cin>>key;
        int pos=BinarySearch(arr, n, key);
        if(pos==-1) cout<<"not found"<<nl;
        else cout<<"found"<<nl;
    }

    Love_Byte
}