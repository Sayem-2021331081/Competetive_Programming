//Author : Sayem Islam
// Generated on 2025-10-23 21:25:30


#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define MOD 1000000007
const int N = 3e5 + 123;
int par[N];
int sz[N];

void init(int i)
{
    par[i] = i;
    sz[i] = 1;
}
int find(int i)
{
    if (par[i] == i) return i;
    return par[i] = find(par[i]);
}
void join(int a, int b)
{
    int pa = find(a);
    int pb = find(b);
    if (pa == pb)
        return;
    if (sz[pa] < sz[pb])
    {
        swap(pa, pb);
    }
    par[pb] = pa;
    sz[pa] += sz[pb];
   
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    vector<pair<int,pair<int,int>>>adj;
    for(int i=1;i<=n;++i) {
        init(i);
    }
    while(m--){
        int u,v,w;
        cin>>u>>v>>w;
        adj.push_back({w,{u,v}});

    }
    sort(adj.begin(),adj.end());
    int weight=0;

    for(auto& e:adj){
        int wt=e.first;
        int u=e.second.first;
        int v=e.second.second;
        if(find(u)==find(v)) continue;
        join(u,v);
        weight+=wt;
        //cout<<u<<" "<<v<<endl;
        
    }
    cout<<weight<<endl;



    return 0;
}