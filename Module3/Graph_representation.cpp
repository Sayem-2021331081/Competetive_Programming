//Author : Sayem Islam
// Generated on 2025-05-23 07:29:25


#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    // int adj[n+1][n+1];
    // memset(adj,0,sizeof adj);
    // for(int i=0;i<m;++i){
    //     int u,v;
    //     cin>>u>>v;
    //     adj[u][v]=1;
    //     adj[v][u]=1;
    // }

    // vector<int>adj[n+1];

    // for(int i=0;i<m;++i){
    //     int u,v;
    //     cin>>u>>v;
    //     adj[u].push_back(v);
    //     adj[v].push_back(u);
    // }
    // for(int i=1;i<=n;++i){
    //     cout<<i<<" : ";
    //     for(auto e:adj[i]){
    //         cout<<e<<" ";
    //     }
    //     cout<<endl;
    // }

    //vector<pair<int,int>> adj[n + 1];
    int adj[n+1][n+1];
    for(int i=0;i<=n;++i){
        for(int j=0;j<=n;++i){
            adj[i][j]=INT_MAX;
        }
    }
    for (int i = 0; i < m; ++i)
    {
        int u, v,w;
        cin >> u >> v>>w;
        // adj[u].push_back({v,w});
        // adj[v].push_back({u,w});
        adj[u][v]=w;
        adj[v][u]=w;
    }
    for (int i = 1; i <= n; ++i)
    {
        cout << i << " : ";
        for (auto e : adj[i])
        {
            cout <<"("<<e.first << ","<<e.second<<") ";
        }
        cout << endl;
    }
}

