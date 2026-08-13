//Author : Sayem Islam
// Generated on 2025-07-12 15:57:18


#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define MOD 1000000007

void solve(int i)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,q;
    cin>>n>>q;
    vector<int>v(n);
    for(auto& e:v) cin>>e;
    sort(v.begin(),v.end());
    cout << "Case " << i << ":" << endl;
    while(q--){
        int l,r;
        cin>>l>>r;
    int lb=lower_bound(v.begin(),v.end(),l)-v.begin();
    int ub=upper_bound(v.begin(),v.end(),r)-v.begin();
    cout<<ub-lb<<endl;
    }
    
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc = 1;
    cin >> tc;

    for (int i = 1; i <= tc; i++)
    {
        solve(i);
    }

    return 0;
}