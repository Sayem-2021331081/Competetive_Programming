#include<bits/stdc++.h>
using namespace std;
#define N 100005
vector<int>adj[N];
int vis[N];

void dfs(int u){
    //cout<<"Visiting NOde: "<<u<<endl;
    //if(vis[u]) return;
    vis[u]=1;

    for(int v:adj[u]){
        if(vis[v]) continue;
        level[u]=level
        dfs(v);
        //cout<<"Returning to node "<<u<<endl;
    }
    //O(n+2*m)

}

int main(){
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;++i){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(1);
}