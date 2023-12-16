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
    
	long long n,k; cin>>n>>k;
	int eat=0;
	long long sum=0;
	for(int i=1; i<=n; i++){
		sum+=i;
		if(sum>=k){
			if(k==(sum-(n-i))){
				eat=n-i;
				break;
			}
		}
	}
	cout<<eat<<nl; 
	
    return maru
}