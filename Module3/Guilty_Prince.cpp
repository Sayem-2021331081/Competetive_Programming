// Author : Sayem Islam
//  Generated on 2025-05-27 19:05:08

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define MOD 1000000007

int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};

void solve(int case_no)
{
    int w, h; // Width first, then height
    cin >> w >> h;

    char a[h][w]; // rows then columns
    int vis[h][w];
    memset(vis, 0, sizeof vis);

    queue<pair<int, int>> q;
    int cnt = 1;

    for (int i = 0; i < h; ++i)
    {
        for (int j = 0; j < w; ++j)
        {
            cin >> a[i][j];
            if (a[i][j] == '@')
            {
                q.push({i, j});
                vis[i][j] = 1;
            }
        }
    }

    while (!q.empty())
    {
        pair<int,int>u = q.front();
        int x=u.first;
        int y=u.second;
        q.pop();
        for (int i = 0; i < 4; ++i)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (nx >= 0 && ny >= 0 && nx < h && ny < w &&
                a[nx][ny] == '.' && vis[nx][ny] == 0)
            {
                q.push({nx, ny});
                vis[nx][ny] = 1;
                cnt++;
            }
        }
    }

    cout << "Case " << case_no << ": " << cnt << endl;
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;

    for (int i = 1; i <= tc; i++)
    {
        solve(i);
    }

    return 0;
}
