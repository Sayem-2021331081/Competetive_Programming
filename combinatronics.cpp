#include <bits/stdc++.h>
#include <math.h>

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define M_PI 3.14159265358979323846
#define removevectorduplicates(v) sort(v.begin(), v.end()), v.erase(unique(v.begin(), v.end()), v.end())

const int M = 1e9 + 7;
long long mod(long long x)
{
    return ((x % M + M) % M);
}
long long add(long long a, long long b)
{
    return mod(mod(a) + mod(b));
}
long long mul(long long a, long long b)
{
    return mod(mod(a) * mod(b));
}

ll modPow(ll a, ll b)
{
    if (b == 0)
        return 1LL;
    if (b == 1)
        return a % M;
    ll res = 1;
    while (b)
    {
        if (b & 1 == 1)
            res = mul(res, a);
        a = mul(a, a);
        b = b / 2;
    }
    return res;
}
int N = 1e5;
vector<ll> fact(N + 1);
vector<ll> ifact(N + 1);

ll nCr(ll n, ll r)
{
    return mul(fact[n], mul(ifact[n-r], ifact[r]));
}
void solve()
{
    fact[0] = 1;
    for (int i = 1; i <= N; ++i)
    {
        fact[i] = mul(fact[i - 1], i);
    }
    ifact[N] = modPow(fact[N], M - 2);
    for (int i = N - 1; i >= 0; --i)
    {
        ifact[i] = mul(ifact[i + 1], i + 1);
    }

   cout<<nCr(3,2);
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout << fixed;
    cout << setprecision(10);
    //        freopen("timber_input.txt", "r", stdin);
    //        freopen("timber_output.txt", "w", stdout);
    int t = 1;
    //cin >> t;
    for (int i = 1; i <= t; ++i)
    {
        solve();
    }

    return 0;
}

