////////////////////////////////////////
//************************************//
//*         MD SIRAJUL ISLAM         *//
//*           DEPT OF CSE            *//
//*              BAUET               *//
//*           BATCH : 15th           *//
//*       ID:0812210205101025        *//
//************************************//
////////////////////////////////////////
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char const nl='\n';
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //long long a,b,c,d,mul,last;
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    if(b*log(a)>d*log(c)) cout << "YES" << "\n";
    else cout << "NO" << "\n";
    return 0;
}