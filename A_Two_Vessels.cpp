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

  int t; cin>>t;
  while(t--){
    int a,b,c; cin>>a>>b>>c;
    if(a==b){
      cout<<0<<nl;
      continue;
    }
    int count=0;
    if(b>a) swap(a, b);
    while(a>b){
      a-=c;
      count++;
    }
    cout<<(count+1)/2<<nl;
  }
  return maru
}
