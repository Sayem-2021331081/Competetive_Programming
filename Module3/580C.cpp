#include <bits/stdc++.h>
using namespace std;
#define N 200005
vector<int> adj[N];
int cat[N];
int n, m;
int ans=0;
void dfs(int u,int par,int cnt)
{
    int c;
    if(cat[u]==1) c=cnt+1;
    else c=0;
    if(c>m) return;
    if(adj[u].size()==1 && u!=1) ans++;
    //cout<<u<<"->"<<c<<endl;
    //cout<<u<<endl;
    for(int v:adj[u]){
        if(v==par) continue;
        dfs(v,u,c);
    }

}

int main()
{
    
    cin >> n >> m;
    for(int i=1;i<=n;++i) cin>>cat[i];

    for (int i = 0; i < n-1; ++i)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(1,0,0);
    cout<<ans<<endl;
}