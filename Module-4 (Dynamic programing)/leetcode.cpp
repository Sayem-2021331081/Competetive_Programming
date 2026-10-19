#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

vector<int> lastVisitedCell(vector<vector<char>>& grid) {
    int n = grid.size();
    int m = grid[0].size();
    vector<vector<bool>> vis(n, vector<bool>(m, false));

    int i = 0, j = 0;
    vector<int> last = {0, 0};

    while (true) {
        vis[i][j] = true;
        last = {i, j};

        int ni = i, nj = j;
        char c = grid[i][j];
        if (c == 'L') nj = j - 1;
        else if (c == 'R') nj = j + 1;
        else if (c == 'U') ni = i - 1;
        else if (c == 'D') ni = i + 1;

        if (ni < 0 || ni >= n || nj < 0 || nj >= m || vis[ni][nj]) break;
        i = ni;
        j = nj;
    }
    return last;
}

void solve() {
    vector<vector<char>> grid = {{'R','D'},{'U','L'}};
    vector<int> ans = lastVisitedCell(grid);
    for (auto& e : ans) cout << e << " ";
    cout << endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc = 1;
    // cin >> tc;
    while (tc--) solve();
    return 0;
}