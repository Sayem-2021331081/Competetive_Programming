//Author : Sayem Islam
// Generated on 2026-08-14 08:48:46


#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define MOD 1000000007
const int mx=1e6+123;
int cnt[mx];

void solve()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x;
    cin>>x;
    cout<<cnt[x]<<endl;
    

    
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int lim=1e6;
    for(int i=1;i<=lim;++i){
        for(int j=i;j<=lim;j+=i){
            cnt[j]++;
        }
    }


    int tc = 1;
    cin >> tc;

    for (int i = 1; i <= tc; i++)
    {
        solve();
    }

    return 0;
}