#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

int dx[] = {1, 0, -1, 0}; // D, R, U, L
int dy[] = {0, 1, 0, -1};
char d[] = {'D', 'R', 'U', 'L'};

void solve()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<vector<char>> a(n, vector<char>(m));
    pair<int, int> s, e;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> a[i][j];
            if (a[i][j] == 'A')
                s = {i, j};
            if (a[i][j] == 'B')
                e = {i, j};
        }
    }

    vector<vector<int>> vis(n, vector<int>(m, 0));
    vector<vector<int>> level(n, vector<int>(m, 0));
    vector<vector<char>> dir(n, vector<char>(m, 'x'));
    vector<vector<pair<int, int>>> prev(n, vector<pair<int, int>>(m));

    queue<pair<int, int>> q;
    q.push(s);
    vis[s.first][s.second] = 1;

    bool found = false;

    while (!q.empty())
    {
        auto [x, y] = q.front();
        q.pop();

        for (int k = 0; k < 4; ++k)
        {
            int nx = x + dx[k];
            int ny = y + dy[k];

            if (nx < 0 || ny < 0 || nx >= n || ny >= m)
                continue;
            if (a[nx][ny] == '#' || vis[nx][ny])
                continue;

            q.push({nx, ny});
            vis[nx][ny] = 1;
            level[nx][ny] = level[x][y] + 1;
            dir[nx][ny] = d[k];
            prev[nx][ny] = {x, y};

            if (make_pair(nx, ny) == e)
            {
                found = true;
                break;
            }
        }

        if (found)
            break;
    }

    if (vis[e.first][e.second])
    {
        cout << "YES\n";
        cout << level[e.first][e.second] << "\n";
        string path;
        pair<int, int> cur = e;
        while (cur != s)
        {
            path += dir[cur.first][cur.second];
            cur = prev[cur.first][cur.second];
        }
        reverse(path.begin(), path.end());
        cout << path << "\n";
    }
    else
    {
        cout << "NO\n";
    }
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc = 1;
    // cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}
