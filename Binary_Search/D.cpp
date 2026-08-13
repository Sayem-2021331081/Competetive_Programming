//Author : Sayem Islam
// Generated on 2025-07-12 18:47:27


#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define MOD 1000000007

void solve()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,t;
    cin>>n>>t;
    vector<int>v(n);
    for(auto& e:v) cin>>e;
    int i=0,j=0;
    int sum=0;
    int mx=0;
    while(i<n){
        if(j<n && sum+v[j]<=t){
        while(j<n && sum+v[j]<=t){
            sum+=v[j];
            j++;

        }
    }
        else {
        mx=max(mx,j-i);
        sum-=v[i];
        i++;

        }
    }
    cout<<mx<<endl;
    
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc = 1;
    //cin >> tc;

    for (int i = 1; i <= tc; i++)
    {
        solve();
    }

    return 0;
}