// Author : Sayem Islam
//  Generated on 2025-07-11 19:26:25

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define MOD 1000000007

vector<int> v;
int isok(int i, int x)
{
    if (v[i] <= x)
        return 0;
    return 1;
}
void solve()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    v.resize(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];
    sort(v.begin(), v.end());

    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        int l = 0, r = n;
        while (l < r)
        {
            int mid = (l + r) / 2;
            if (isok(mid, x) == 0)
                l = mid + 1;
            else
                r = mid;
        }
        cout << l << endl;
    }
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc = 1;
    // cin >> tc;

    for (int i = 1; i <= tc; i++)
    {
        solve();
    }

    return 0;
}