// Author : Sayem Islam
//  Generated on 2025-07-11 08:13:47

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define MOD 1000000007

int isok(int n, int y)
{
    if (n * (n + 1) / 2 < y)
        return 0;
    else
        return 1;
}

void solve()
{
    int y;
    cin >> y;
    int l = 0, r = 3e9 + 1;
    while (l < r)
    {
        int mid = (l + r) / 2;
        if (!isok(mid, y))
            l = mid + 1;
        else
            r = mid;
    }
    int n = l;
    if (n * (n + 1) / 2 == y)
        cout << n << endl;
    else
        cout << "NAI\n";
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc = 1;
    cin >> tc;

    for (int i = 1; i <= tc; i++)
    {
        solve();
    }

    return 0;
}
