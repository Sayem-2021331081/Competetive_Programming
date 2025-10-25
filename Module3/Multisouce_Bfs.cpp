#include<bits/stdc++.h>
using namespace std;
int main(){
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
    int k;
    cin>>k;
    int fire[k];
    for(int i=0;i<k;++i){
        cin>>fire[i];
    }
    vector<int>vis(n+1,0);
    vector<int>level(n+1,0);
    queue<int>q;
    for(int i=0;i<k;++i){
        q.push(fire[i]);
        vis[fire[i]]=1;
        level[fire[i]]=0;

    }
    int ans=0;
    while(!q.empty()){
        int u=q.front();
        q.pop();
        for(auto v:adj[u]){
            if(vis[v]) continue;
            q.push(v);
            vis[v]=1;
            level[v]=level[u]+1;
            ans=max(ans,level[v]);
        }
    }
    cout<<ans<<endl;
    
}