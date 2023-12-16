// //***********************************//
// //*         MD SIRAJUL ISLAM        *//
// //*           DEPT OF CSE           *//
// //*              BAUET              *//
// //*      github.com/b14ckb3rry      *//
// //***********************************//

// #include <bits/stdc++.h>
// using namespace std;
// #define maru 0;

// int32_t main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
    
//     int t; cin>>t;
//     while(t--){
//         // int x,y,k; cin>>x>>y>>k;
//         // if(x>=y){
//         //     cout<<x<<'\n';
//         //     continue;
//         // }
//         // int count=x;
//         // while(count<y){
//         //     count+=k;
//         // }
//         // cout<<count<<'\n';
//         int x, y, z;
//         cin >> x >> y >> z;
//         if(y <= x) {
//             cout << x << '\n';
//             continue;
//         }
//         int sum = x;
//         int rem = y - x;
//         if(z >= rem) {
//             cout << sum + rem << '\n';
//         }
//         else {
//             cout << sum + z + (y - sum - z) * 2 << '\n';
//         }

//     }
    
//     return maru
// }


#include <iostream>
using namespace std;

int main() {
    int x, y, k;
    cin >> x >> y >> k;
    
    if (x >= y) {
        cout << x << '\n';
    } else {
        int steps = (y - x + k - 1) / k;
        cout << x + steps * k << '\n';
    }

    return 0;
}
