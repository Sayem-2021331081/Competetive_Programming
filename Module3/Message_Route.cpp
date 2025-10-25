//Author : Sayem Islam
// Generated on 2025-05-27 16:20:52


#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define MOD 1000000007

void solve()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    vector<int>adj[n+1];
    while(m--){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int> vis(n + 1, 0);
    vector<int> prev(n + 1, 0);

    queue<int>q;
    int s=1;
    q.push(s);
    vis[s]=1;
    
    while(!q.empty()){
        int u=q.front();
        q.pop();
        for(auto& v:adj[u]){
            if(vis[v]==0){
                vis[v]=1;
                q.push(v);
                prev[v]=u;
            }
        }
    }
    if(vis[n]){
        vector<int>a;
        int x=n;
        while(1){
            a.push_back(x);
            if(x==s) break;
            x=prev[x];

        }
        cout<<a.size()<<endl;
        for(int i=a.size()-1;i>=0;--i){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    else
        cout << "IMPOSSIBLE\n";
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