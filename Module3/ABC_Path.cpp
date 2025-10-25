#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int dx[] = {-1, 0, 1, -1, 1, -1, 0, 1};
int dy[] = {-1, -1, -1, 0, 0, 1, 1, 1};

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int h, w, case_num = 0;
    while (cin >> h >> w, h || w)
    {
        vector<vector<char>> grid(h, vector<char>(w));
        vector<vector<int>> dist(h, vector<int>(w, 0));
        int max_len = 0;

        for (int i = 0; i < h; ++i)
            for (int j = 0; j < w; ++j)
                cin >> grid[i][j];

        queue<pair<int, int>> q;

        // Start from all 'A's
        for (int i = 0; i < h; ++i)
        {
            for (int j = 0; j < w; ++j)
            {
                if (grid[i][j] == 'A')
                {
                    q.push({i, j});
                    dist[i][j] = 1;
                    max_len = 1;
                }
            }
        }

        while (!q.empty())
        {
            auto u = q.front();
            q.pop();
            int x=u.first;
            int y=u.second;
            for (int i = 0; i < 8; ++i)
            {
                int nx = x + dx[i], ny = y + dy[i];
                if (nx >= 0 && nx < h && ny >= 0 && ny < w &&
                    grid[nx][ny] == grid[x][y] + 1 && dist[nx][ny] < dist[x][y] + 1)
                {
                    dist[nx][ny] = dist[x][y] + 1;
                    q.push({nx, ny});
                    max_len = max(max_len, dist[nx][ny]);
                }
            }
        }

        cout << "Case " << ++case_num << ": " << max_len << endl;
    }

    return 0;
}
