// Author : Sayem Islam
// Generated on 2026-07-04

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

bool isok(vector<int> &v, int mid, int n, int k)
{
    int cnt = 1;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        // A single book cannot exceed the limit
        if (v[i] > mid)
            return false;

        if (sum + v[i] <= mid)
        {
            sum += v[i];
        }
        else
        {
            cnt++;
            sum = v[i];

            if (cnt > k)
                return false;
        }
    }

    return true;
}

int solve()
{
    vector<int> arr = {12, 34, 67, 90};
    int k = 2;
    int n = arr.size();

    if (k > n)
        return -1;

    int l = *max_element(arr.begin(), arr.end());
    int r = accumulate(arr.begin(), arr.end(), 0LL);

    int ans = -1;

    while (l <= r)
    {
        int mid = l + (r - l) / 2;

        if (isok(arr, mid, n, k))
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    return ans;
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cout << solve() << endl;

    return 0;
}