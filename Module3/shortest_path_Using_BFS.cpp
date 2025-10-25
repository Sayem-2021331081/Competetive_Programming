#include <bits/stdc++.h>
using namespace std;
int main()
{
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
    int src,dest;
    cin>>src>>dest;
    
    vector<int> vis(n + 1, 0);
    vector<int> level(n + 1, 0);
    vector<int>prev(n+1,0);
    queue<int> q;
    q.push(src);
    vis[src]=1;
    level[src]=0;
    while (!q.empty())
    {
        int u=q.front();
        q.pop();
        for(auto& v:adj[u]){
        if(vis[v]) continue;
            q.push(v);
            vis[v]=1;
            level[v]=level[u]+1;
            prev[v]=u;
        }
    }
    int x=dest;
    
    while(1){
        cout << x << "<-";
        if(x==src) break;
        x=prev[x];
    }
    cout<<endl;
    



}