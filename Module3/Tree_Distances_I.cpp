// Author : Sayem Islam
//  Generated on 2025-05-29 07:59:58

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define N 200005
vector<int> adj[N];
int level[N];

void dfs(int u, int par)
{

    for (auto &v : adj[u])
    {
        if (v == par)
            continue;
        level[v] = level[u] + 1;
        dfs(v, u);
    }
}
void solve()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    for (int i = 0; i < n - 1; ++i)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(1, 0);
    int max_level = INT_MIN;
    int max_level_node = 0;
    for (int i = 1; i <= n; ++i)
    {
        if (level[i] > max_level)
        {
            max_level = level[i];
            max_level_node = i;
        }
    }
    
    level[max_level_node] = 0;
    dfs(max_level_node, 0);
    int endpoint1=max_level_node;
    int endpoint2=0;
    max_level=0;
    for (int i = 1; i <= n; ++i)
    {
        if(level[i]>max_level){
            max_level=level[i];
            endpoint2=i;
        }
        
    }
    //cout<<endpoint1<<" "<<endpoint2<<endl;
    int ans[n+1]={};
    for(int i=1;i<=n;++i){
        ans[i]=level[i];
    }
    level[endpoint2]=0;
    dfs(endpoint2,0);
    for(int i=1;i<=n;++i){
        ans[i]=max(ans[i],level[i]);
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc = 1;
    // cin >> tc;

    for (int i = 1; i <= tc; i++)
    {
        solve();
    }

    return 0;
}