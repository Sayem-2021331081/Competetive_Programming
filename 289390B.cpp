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
int mx[N];
int mn[N];

int n, m;
void init(int i)
{
    par[i] = i;
    sz[i] = 1;
    mn[i]=i;
    mx[i]=i;
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
    mn[pa] = min(mn[pa], mn[pb]);
    mx[pa] = max(mx[pa], mx[pb]);
}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;
    for (int i = 1; i <= n; ++i) init(i);
    while (m--)
    {
        string s;
        
        cin >> s;
        if (s == "union")
        {
            int u,v;
            cin >> u >> v;
            join(u, v);
        }
        else
        {   int v;
            cin >>v ;
            int pv=find(v);
            cout << mn[pv] << " " << mx[pv] << " " << sz[pv] << endl;
            
        }
    }

    return 0;
}