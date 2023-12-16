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

    int t;
    for (cin >> t; t; t-=1)
    {
        int n, a, b;
        cin >> n >> a >> b;
        vector<vector<int>> adj(n + 1);
        for (int i = 0; i < n; i++)
        {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<int> dep(n + 1, -1), par(n + 1);
        dep[b] = 0;
        int root = 0;
        function<void(int)> dfs = [&](int u)
        {
            for (int v : adj[u])
            {
                if (dep[v] == -1)
                {
                    par[v] = u;
                    dep[v] = dep[u] + 1;
                    dfs(v);
                }
                else if (dep[v] < dep[u] and par[u] != v)
                {
                    root = v;
                }
            }
        };
        dfs(b);
        vector<int> d(n + 1, -1);
        d[root] = 0;
        queue<int> q;
        q.push(root);
        while (not q.empty())
        {
            int u = q.front();
            q.pop();
            for (int v : adj[u])
            {
                if (d[v] == -1)
                {
                    d[v] = d[u] + 1;
                    q.push(v);
                }
            }
        }
        if (d[a] > d[b]) cout << "YES\n";
        else cout << "NO\n";
    }

    return maru
}