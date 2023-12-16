///////////////////////////////////////
//***********************************//
//*         MD SIRAJUL ISLAM        *//
//*           DEPT OF CSE           *//
//*              BAUET              *//
//*      github.com/b14ckb3rry      *//
//***********************************//
///////////////////////////////////////

#include <bits/stdc++.h>
using namespace std;

const char nl= '\n';
#define maru 0;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
	int n; cin>>n;
	string s; cin>>s;
	int zers=count(s.begin(),s.end(),'0');
	int ons=count(s.begin(),s.end(),'1');
	cout<<n-(2*min(zers,ons))<<nl;   
    
    return maru
}