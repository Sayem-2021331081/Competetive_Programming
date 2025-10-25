#include <bits/stdc++.h>
using namespace std;
#define N 200005
int n, m;
vector<int> adj[N];
int vis[N];
int prev_node[N];
bool cycle_found=false;
int cycle_start,cycle_end;
void dfs(int u, int prev)
{   
    if(vis[u]){
        if(cycle_found==false){
        cycle_found=true;
        cycle_start=u;
        cycle_end=prev;
        }
        return;
    }

    vis[u]=1;
    prev_node[u]=prev;
    for (int v : adj[u])
    {
        if(v!=prev){//directed e ei condition lgbena
        dfs(v,u);
        }
        
    }
}
int main()
{
    cin >> n >> m;
    for (int i = 0; i < m; ++i)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(int i=1;i<=n;++i){
        if(!vis[i]) dfs(i,0);
    }
    if(cycle_found) {
        cout<<"Cycle Detected\n";
        vector<int>path;
        int node=cycle_end;
        while(1){
            path.push_back(node);
            node=prev_node[node];
            if(node==cycle_start) break;
        }
        path.push_back(cycle_start);
        reverse(path.begin(),path.end());
        for(int node:path){
            cout<<node<<" ";
        }

    }


    
}