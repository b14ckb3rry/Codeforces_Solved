//***********************************//
//*         MD SIRAJUL ISLAM        *//
//*           DEPT OF CSE           *//
//*              BAUET              *//
//*      github.com/b14ckb3rry      *//
//***********************************//

#include <bits/stdc++.h>
using namespace std;
#define maru 0;

int cal(int i,int j) {
    long long s=0;
    if(i==1 or i == 10 or j == 1 or j == 10) s=1;
    else if(i==2 or i == 9 or j == 2 or j == 9) s=2;
    else if(i==3 or i == 8 or j == 3 or j == 8) s=3;
    else if(i==4 or i == 7 or j == 4 or j == 7) s=4;
    else if(i==5 or i == 6 or j == 5 or j == 6) s=5;
    return s;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    for(cin>>t; t; t-=1) {
        long long sum = 0;
        for(int i=1 ; i<=10; i++) {
            for(int j=1; j<=10; j++) {
                char ch;
                cin >> ch;
                if(ch == 'X') {
                    sum+=cal(i,j);
                }
            }
        }
        cout<<sum<<'\n';
    }
    
    return maru
}