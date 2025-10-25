//Author : Sayem Islam
// Generated on 2025-05-31 15:32:03


#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define MOD 1000000007
#define N 200005
vector<int>adj[N];
int vis[N];
int color[N];
int n;

pair<int,int> dfs(int u,int c){
    
    vis[u]=1;
    color[u]=c;
    int cnt1=(c==1);
    int cnt2=(c==2);
    for(auto v:adj[u]){
        if(vis[v]) continue;
        auto res=dfs(v,3-c);
        cnt1+=res.first;
        cnt2+=res.second;

    }
    return {cnt1,cnt2};


}
void solve(int i)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>n;

    
    set<int>s;
    for(int i=0;i<n;++i){
        int u,v;
        cin>>u>>v;
        s.insert(u);
        s.insert(v);
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int ans=0;
    for(auto& e:s){
        if(vis[e]) continue;
        auto res=dfs(e,1);
        ans+=max(res.first,res.second);

    }
    cout<<"Case "<<i<<": "<<ans<<endl;
    for (int i = 1; i <= N; ++i)

    {
        adj[i].clear();
        vis[i] = 0;
        color[i] = 0;
    }
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc = 1;
    cin >> tc;

    for (int i = 1; i <= tc; i++)
    {
        solve(i);
    }

    return 0;
}