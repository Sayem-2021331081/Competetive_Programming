#include <bits/stdc++.h>
using namespace std;
#define N 100005
vector<int> adj[N];
//int vis[N];
int level[N];
int height[N];
void dfs(int u,int par)
{
    // vis[u] = 1;

    for (int v : adj[u])
    {
        if (v==par)continue;
        level[v]=level[u]+1;
        dfs(v,u);
        height[u]=max(height[u],height[v]+1);
    }
}

int main()
{
    int n;
    cin >> n ;
    for (int i = 0; i < n-1; ++i)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int src=1;
    level[src]=0;
    dfs(src,0);
    for(int i=1;i<=n;++i) cout<<i<<"-> "<<level[i]<<" "<<endl;

}