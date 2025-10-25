//Author : Sayem Islam
// Generated on 2025-05-23 09:25:13


#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define MOD 1000000007


int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<int> adj[n + 1];
    for (int i = 0; i < m; ++i)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int src = 1;
    queue<int> q;
    int level[n + 1];
    int vis[n + 1] = {0};
    level[src] = 0;
    q.push(src);
    vis[src] = 1;

    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for (auto v : adj[u])
        {
            if (vis[v])
                continue;
            q.push(v);
            level[v] = level[u] + 1;
            vis[v] = 1;
        }
    }
    bool is_tree=(m==n-1);
    for(int i=1;i<=n;++i){
        if(vis[i]==0){
            is_tree=false;
            break;
        }
    }
    if(is_tree){
        cout<<"Tree\n";
    }
    else cout<<"Not a tree\n";

    
}
