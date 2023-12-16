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

int main()
{
    const char nl= '\n';
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a,b,flag=0;
    cin>>a>>b;
    for(int i=a; i<=b; i++){
        int lucky=0, x=i;
        while(x!=0){
            if(x%10!=7 && x%10!=4){
                lucky++;
            }
            x/=10;
        }
        if(lucky==0){
            cout<<i<<" ";
            flag++;
        }
    }
    if(flag==0){
        cout<<-1<<nl;
    }
    
    return 0;
}