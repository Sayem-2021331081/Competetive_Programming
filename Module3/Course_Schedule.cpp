//Author : Sayem Islam
// Generated on 2025-10-09 21:38:00


#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define MOD 1000000007
const int N=1e5+123;
int n,m;
vector<int>adj[N];
vector<int>vis(N);
vector<int>order;
bool cycle=0;
void dfs(int u){
    
    vis[u]=1;

    for(auto& v:adj[u]){
       if(vis[v]==0) dfs(v);
       else if(vis[v]==1) cycle=1;
       
      
    }
    vis[u] = 2; 
    order.push_back(u);
}
void topological_sort(){
    order.clear();
    for(int i=1;i<=n;++i){
        if(vis[i]==0) dfs(i);

    }
    reverse(order.begin(),order.end());

}
void solve()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>n>>m;
    while(m--){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
    }
    topological_sort();
    if(cycle){
        cout << "IMPOSSIBLE"<<endl;
        
    }
    else{
    for(auto& e:order){
        cout<<e<<" ";
    }
    cout<<endl;
}


    
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