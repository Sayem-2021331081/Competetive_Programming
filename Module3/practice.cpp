//Author : Sayem Islam
// Generated on 2025-10-09 20:25:59


#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define MOD 1000000007
const int N=1e5+123;
int n,m;
vector<int>adj[N];
int vis[N];
int col[N];
bool ch=1;
void dfs(int u,int c){
    if(vis[u]){
        if(col[u]==c) {
           
            return;

        }
        else {
            ch=0;
            return;
        }
    }
    vis[u]=1;
    col[u]=c;
    for(auto& v:adj[u]){
        //if(vis[v]) continue;
        if(c==1) dfs(v,2);
        else dfs(v,1);
        
    }

}

void solve()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>n>>m;
    for(int i=0;i<m;++i){
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    for(int i=1;i<=n;++i){

    if(!vis[i]) dfs(i,1);
    }
    if(!ch)
        cout << "IMPOSSIBLE"<<endl;
    else {
        for(int i=1;i<=n;++i) cout<<col[i]<<" ";
        cout<<endl;
    }    
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc = 1;
    //cin >> tc;

    for (int i = 1; i <= tc; i++)
    {
        solve();
    }

    return 0;
}