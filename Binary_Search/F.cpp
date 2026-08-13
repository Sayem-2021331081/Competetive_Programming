//Author : Sayem Islam
// Generated on 2025-07-12 20:13:42


#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define MOD 1000000007
int n;
pair<int,int> ismid(int num){
    int lb=0,rb=0;
    for(int i=1;i<=n;++i){
        rb+=min(n,num/i);
        lb+=min(n,(num-1)/i);

    }
    return {lb,rb};
}

void solve()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>n;
    int l=1,r=n*n;
    int m=(r+1)/2;
    int ans=0;
    while (l<=r)
    {
       int mid=(l+r)/2;
       auto it=ismid(mid);
       if(m>=it.first && m<=it.second) {
        ans=mid;
        break;
       }
       else if(it.second<m) l=mid+1;
       else if(it.first>m) r=mid-1;
    }
    cout<<ans<<endl;
    


    
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