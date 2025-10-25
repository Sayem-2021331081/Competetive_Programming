//Author : Sayem Islam
// Generated on 2025-05-23 08:30:31


#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int>adj[n+1];
    for(int i=0;i<m;++i){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);

    }

    int src = 3;
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
            level[v]=level[u]+1;
            vis[v]=1;
        }
    }
    for(int i=1;i<=n;++i){
        cout<<i<<"->"<<level[i]<<endl;
    }


}