//***********************************//
//*         MD SIRAJUL ISLAM        *//
//*      github.com/b14ckb3rry      *//
//***********************************//

#include <bits/stdc++.h>
using namespace std;
#define maru 0;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        // bool flag = true;
        for (int i = 1; i < n - 1; i++)
        {
            if (arr[i - 1] < arr[i] && arr[i] > arr[i + 1])
            {
                swap(arr[i], arr[i + 1]);
            }
        }
        // for (int i = 0; i < n; i++)
        // {
        //     if (arr[i] == i + 1)
        //     {
        //         continue;
        //     }
        //     else
        //     {
        //         flag = false;
        //         break;
        //     }
        // }
        if (arr[0]==1)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return maru
}