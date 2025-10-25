#include <bits/stdc++.h>
using namespace std;
#define N 100005
vector<int> adj[N];
int sz[N];

void dfs(int u, int par)
{   sz[u]=1;
    
    for (int v : adj[u])
    {
        if (v == par)continue;
        
        dfs(v, u);
        sz[u]+=sz[v];
    }
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n - 1; ++i)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int src = 1;
    
    dfs(src, 0);
    for (int i = 1; i <= n; ++i) cout<<sz[i]
}