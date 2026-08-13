//Author : Sayem Islam
// Generated on 2026-06-26 09:50:34


#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define MOD 1000000007

void solve()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int>v={1,7,7};
    int n=v.size();
    int l=0,r=n;
    int x=7;
    while(l<r){
        int mid=l+(r-l)/2;
        if(v[mid]<=x) l=mid+1;
        else if(v[mid]>x) r=mid;
    }
    cout<<l-1<<" "<<r-1<<endl;


    
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