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
    string first,second; cin>>first>>second;

    transform(first.begin(), first.end(), first.begin(), ::toupper);
    transform(second.begin(), second.end(), second.begin(), ::toupper);
    if(first>second) cout<<"1"<<nl;
    if(first<second) cout<<"-1"<<nl;
    if(first==second) cout<<"0"<<nl;
    
    return 0;
}