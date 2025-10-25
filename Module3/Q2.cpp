#include<bits/stdc++.h>
using namespace std;
const int mx=100005;
vector<int>adj[mx];
int level[mx];
int vis[mx];
int n,m;

void bfs(int start){
    queue<int> q;
    int s = start;
    q.push(s);
    level[s] = 0;
    vis[s]=1;
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for (auto v : adj[u])
        {
            if (vis[v])
                continue;
            q.push(v);
            level[v] = level[u] + 1;
            vis[v] = 1;
        }
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
    int cnt=0;
    for(int i=1;i<=n;++i){
        if(vis[i]==0){
        bfs(i);
        cnt++;
        }
    }
    cout<<cnt<<endl;
    



}
/*
 6 3
1 2
2 3
4 5

g++ .\Q2.cpp
 .\Q2.exe


*/