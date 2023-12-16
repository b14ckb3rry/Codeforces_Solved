//***********************************//
//*         MD SIRAJUL ISLAM        *//
//*           DEPT OF CSE           *//
//*              BAUET              *//
//*      github.com/b14ckb3rry      *//
//***********************************//

#include <bits/stdc++.h>
using namespace std;
#define maru 0;
char a[200];

void solve() {
	int n; cin>>n;
    string s; cin>>s;
	int i = 0;
	int l = 0, r = 1;
	while(r < n) {
		if(s[l] == s[r]) {
			a[i++] = s[l];
			l = r + 1;
			r = r + 2;
		} else {
			r++;
		}
	}
	a[i] = '\0';
	puts(a);
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while(t--){
        solve();
    }
    
    return maru
}