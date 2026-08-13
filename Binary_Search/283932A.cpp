//Author : Sayem Islam
// Generated on 2026-07-06 16:14:17


#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define MOD 1000000007
int w,h,n;
bool isok(int mid){
    int cnt=(mid/w)*1ll*(mid/h);
   // int cnt2=max(w,h)*1ll*
    return cnt>=n;
}

void solve()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>w>>h>>n;
    int l=0,r=1;
    while(!isok(r)){
        r*=2;
    }
    int ans=0;
    while(l<=r){
        int mid=l+(r-l)/2;
        if(isok(mid)){
            ans=mid;
            r=mid-1;

        }
        else l=mid+1;
    }
    ans=min(max(w,h)*n,ans);
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