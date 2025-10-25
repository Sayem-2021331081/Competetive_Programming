// Author : Sayem Islam
// Corrected BFS solution for commando mission

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define N 105
int n, m;
vector<int> adj[N];
int vis[N];
int level1[N], level2[N];

void bfs(int s, int level[])
{
    for(int i=0;i<n;++i) {
        level[i]=0;
        vis[i]=0;
    }
    queue<int> q;
    q.push(s);
    vis[s] = 1;

    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for (auto &v : adj[u])
        {
            if (!vis[v])
            {
                vis[v] = 1;
                level[v] = level[u] + 1;
                q.push(v);
            }
        }
    }
}

void solve(int case_num)
{
    
    cin >> n >> m;

    for (int i = 0; i < n; ++i)
    {
        adj[i].clear();
        
        
    }

    for (int i = 0; i < m; ++i)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int s, e;
    cin >> s >> e;

    bfs(s, level1);
    bfs(e, level2);

    int maxi = 0;
    for (int i = 0; i < n; ++i)
    {
        maxi = max(maxi, level1[i] + level2[i]);
    }

    cout << "Case " << case_num << ": " << maxi << endl;
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;

    for (int i = 1; i <= tc; i++)
    {   
        
        solve(i);
    }

    return 0;
}
