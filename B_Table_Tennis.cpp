//***********************************//
//*         MD SIRAJUL ISLAM        *//
//*      github.com/b14ckb3rry      *//
//***********************************//

#include <bits/stdc++.h>
using namespace std;
#define maru 0;
typedef long long ll;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, k;
    cin >> n >> k;
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    priority_queue<ll> pq;
    pq.push(arr[0]);
    int count = 0;
    for (ll i = 1; i < n; i++)
    {
        if (pq.top() > arr[i])
        {
            count++;
            if (count == k)
            {
                break;
            }
            pq.push(arr[i]);
        }
        else
        {
            ll temp = pq.top();
            pq.pop();
            pq.push(arr[i]);
            count = 1;
        }
    }
    cout << pq.top() << '\n';

    return maru
}
