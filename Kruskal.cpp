// Author : Sayem Islam
//  Generated on 2025-10-23 10:44:07

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define MOD 1000000007
const int N = 3e5 + 123;
int par[N];
int sz[N];


int n, m;
void init(int i)
{
    par[i] = i;
    sz[i] = 1;
   
}
int find(int i)
{
    if (par[i] == i)
        return i;
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

    cin >> n >> m;
    for(int i=1;i<=n;++i) init(i);
    vector<pair<int,pair<int,int>>> edges;
    for(int i=0;i<m;++i){
        int u,v,wt;
        edges.push_back({wt,{u,v}});
    }
    sort(edges.begin(),edges.end());
    int cost=0;
    for(auto& edge:edges){
        int wt=edge.first;
        int u=edge.second.first;
        int v=edge.second.second;
        if(find(u)==find(v)){
            continue;

        }
        join(u,v);
        cost+=wt;

    }


    

   
    return 0;
}