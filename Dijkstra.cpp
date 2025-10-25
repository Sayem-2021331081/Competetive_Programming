#include <bits/stdc++.h>
using namespace std;
#define N 200009
vector<pair<long long, long long>> g[N];
long long dis[N] = {0};
bool vis[N] = {false};
long long par[N] = {0};

void dijkstra(long long u)
{
    priority_queue<pair<long long, long long>, vector<pair<long long, long long>>, greater<pair<long long, long long>>> pq;
    pq.push({0, u});
    dis[u] = 0;
    while (!pq.empty())
    {
        long long cur = pq.top().second;
        pq.pop();
        for (auto [v, w] : g[cur])
        {
            if (dis[v] > dis[cur] + w)
            {
                par[v] = cur;
                dis[v] = dis[cur] + w;
                pq.push({dis[v], v});
            }
        }
    }
}

int main()
{
    long long n, m;
    cin >> n >> m;
    for (long long i = 0; i < m; i++)
    {
        long long u, v, w;
        cin >> u >> v >> w;
        g[u].push_back({v, w});
        g[v].push_back({u, w});
    }
    for (long long i = 1; i <= n; i++) dis[i] = 1e15;
    dijkstra(1);
    if (dis[n] == 1e15)
    {
        cout << "-1" << endl;
        return 0;
    }
    vector<long long> ans;
    long long cur = n;
    while (cur)
    {
        ans.push_back(cur);
        cur = par[cur];
    }
    reverse(ans.begin(), ans.end());
    for (auto it : ans)
        cout << it << " ";
    cout << endl;
    return 0;
}