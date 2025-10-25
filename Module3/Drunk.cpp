//Author : Sayem Islam
// Generated on 2025-06-10 21:26:59


#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define MOD 1000000007
vector<int> adj[100005];
int vis[100005];
bool cycle=false;
void dfs(int u){
    
    vis[u]=1;
    for(auto& v:adj[u]){
        if(vis[v]==0){
            dfs(v);
            if(cycle) return;
        }
        else if(vis[v]==1){
            cycle=true;
            return;
        }

    }
    vis[u]=2;
    cout << vis[u] << endl;
}
void solve(int i)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    map<string,int>mp;
    int cnt=1;
    vector<pair<string,string>>edges;
    set<string>s;

    while(n--){
        string a,b;
        cin>>a>>b;
        s.insert(a);
        s.insert(b);
        edges.push_back({a,b});
       
    }
    for(auto& e:s){
        mp[e]=cnt;
        cnt++;
    }
    int node=s.size();
    
    for(auto& e:edges){
        int u=mp[e.first];
        int v=mp[e.second];
        adj[u].push_back(v);
    }
    for(int i=1;i<=node;++i){
        if(!vis[i]) dfs(i);
        if(cycle) break;
    }
    //cout<<cycle<<endl;
    cout << "Case " <<i << ": " << (cycle ? "No" : "Yes") << endl;
    cycle=false;
    for(int i=1;i<=node;++i){
        adj[i].clear();
        vis[i]=0;
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