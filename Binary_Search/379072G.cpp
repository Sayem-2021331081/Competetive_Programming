//Author : Sayem Islam
// Generated on 2025-07-11 20:33:07


#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define MOD 1000000007

void solve()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,k;
    cin>>n>>k;
    int cnt=0;
    int x=1;
    while(cnt<k){
        if(x%n!=0) cnt++;
        x++;
    }
    cout<<x-1<<endl;
    
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