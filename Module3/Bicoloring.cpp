#include<bits/stdc++.h>
using namespace std;
#define N 200005
int n,m;
vector<int>adj[N];
int vis[N];
int color[N];
bool is_possible=true;
void dfs(int u,int c){
    if(vis[u]) {
        //যে কালার হওয়ার কথা সেটাই যদি থাকে
        if(color[u]==c) return;
        else {
            is_possible=false;
            return;
        }

    }

    vis[u]=1;
    color[u]=c;

    for(int v:adj[u]){
        // if(c==1){
        //     dfs(v,2);
        // }
        // else dfs(v,1);
        dfs(v,3-c);

    }
}
int main(){
    cin>>n>>m;
    for(int i=0;i<m;++i){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(int i=1;i<=n;++i){
        if(vis[i]) continue;
        dfs(i,1);
        if(is_possible==false){
        cout<<"Impossible\n";
        }
        else{
        for(int i=1;i<=n;++i) cout<<i<<"->"<<color[i]<<endl;
        }
}

}