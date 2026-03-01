#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int N = 600005;
int par[N];
int sz[N];

void init(int i)
{
    par[i] = i;
    sz[i] = 1;
}

int find_parent(int i)
{
    if (par[i] == i)
        return i;
    return par[i] = find_parent(par[i]);
}

bool join(int a, int b)
{
    int pa = find_parent(a);
    int pb = find_parent(b);

    if (pa == pb)
        return false;

    if (sz[pa] < sz[pb])
        swap(pa, pb);

    par[pb] = pa;
    sz[pa] += sz[pb];

    return true;
}

void solve()
{
    int n;
    cin >> n;

    for (int i = 1; i <= 2 * n; i++)
        init(i); // initialize ,as a,b range (1,2n)

    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i].first >> v[i].second;

    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        int a = v[i].first, b = v[i].second;
        if (join(a, b))
            ans.push_back(i + 1);
    }

    cout << ans.size() << endl;
    for (auto &x : ans)
        cout << x << " ";
    cout << endl;
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
        solve();
    return 0;
}
