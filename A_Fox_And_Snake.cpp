//***********************************//
//*         MD SIRAJUL ISLAM        *//
//*           DEPT OF CSE           *//
//*              BAUET              *//
//*      github.com/b14ckb3rry      *//
//***********************************//

#include <bits/stdc++.h>
using namespace std;
#define maru 0;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int r,c;
    cin>>r>>c;
    vector<char> hash(c, '#');
    vector<char> dot(c-1, '.');
    dot.push_back('#');
    bool check = true;
    for(int i=1; i<=r; i++){
        if(i%2){
            for(int i=0; i<hash.size(); i++){
                cout<<hash[i];
            }
            cout<<'\n';
        }
        else {
            if(check){
                for(int i=0; i<dot.size(); i++){
                    cout<<dot[i];
                }
                check=false;
            }
            else{
                for(int i=dot.size()-1; i>=0; i--){
                    cout<<dot[i];
                }
                check=true;
            }
            cout<<'\n';
        }
    }
    
    return maru
}