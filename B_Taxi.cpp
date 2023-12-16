//***********************************//
//*         MD SIRAJUL ISLAM        *//
//*           DEPT OF CSE           *//
//*              BAUET              *//
//*      github.com/b14ckb3rry      *//
//***********************************//

#include <bits/stdc++.h>
using namespace std;
#define maru 0;
const int N=5;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,a;
    int mp[N];
    // memset(mp,0,sizeof(mp));
    for(int i=0; i<N; i++){
        mp[i]=0;
    }
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a;
        mp[a]++;
    }
	int ans = 0;
	ans += mp[4] + mp[3] + (mp[2] / 2);
	mp[1] -= min(mp[3],mp[1]);
	if (mp[2] & 1)
	{
		mp[1] -= min(2, mp[1]);
		ans ++;
	}
	ans += (mp[1] + 3) / 4;

    cout<<ans<<endl;
    
    // int n; cin>>n;
    // int prefSum=0;
    // while(n--){
    //     int x; cin>>x;
    //     prefSum+=x;
    // }
    // if(prefSum==1 || prefSum==2 || prefSum==3 || prefSum==4){
    //     cout<<"1\n";
    // }
    // else if(prefSum<8){
    //     cout<<"2\n";
    // }
    // else if(prefSum%4==0){
    //     cout<<prefSum/4<<'\n';
    // }
    // else{
    //     int res=prefSum/4;
    //     cout<<res+1<<'\n';
    // }



    // priority_queue<int>q;
    // for(int i=0; i<n; i++){
    //     int x; cin>>x;
    //     q.push(x);
    // }
    // int counter=0;
    // if(n==1){
    //     cout<<"1\n";
    //     return maru
    // }
    // else if(n==2){
    //     int x=q.top(); q.pop();
    //     int y=q.top(); q.pop();
    //     if((x+y)<=4){
    //         cout<<"1\n";
    //     }
    //     else{
    //         cout<<"2\n";
    //     }
    //     return maru
    // }
    // while(!q.empty()){
    //     int grp= q.top();
    //     q.pop();
    //     if(grp==4 || grp==3){
    //         counter++;
    //     }
    //     else if(grp==2){
    //         int grp1=q.top();
    //         q.pop();
    //         if(grp1==1 || grp1==2){
    //             counter++;
    //         }
    //     }
    //     else if(grp==1){
    //         int k=0;
    //         while(!q.empty()){
    //             k++;
    //             q.pop();
    //         }
    //         while(k>4){
    //             k-=4;
    //             counter++;
    //         }
    //         if(k==2 || k==3){
    //             counter++;
    //         }
    //     }
    // }
    // cout<<counter<<'\n';
    
    return maru
}
