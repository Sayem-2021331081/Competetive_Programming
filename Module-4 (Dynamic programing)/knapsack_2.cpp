//Author : Sayem Islam
// Generated on 2026-10-18 20:53:45


#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define MOD 1000000007
const int mx=1e5+123;
int n,w;
vector<int>wt(105),val(105);
int dp[102][mx];
// ja amr rules er baire segula INT_MAX return;
int f(int i,int cval){
    if(cval==0) return 0;
    if(i==n+1){
        return INT_MAX;
    }
    if(dp[i][cval]!=-1) return dp[i][cval];

    int pick=INT_MAX;
    if(cval-val[i]>=0){
        pick=wt[i]+f(i+1,cval-val[i]);
    }
    int nonpick=f(i+1,cval);
    dp[i][cval]=min(pick,nonpick);
    return dp[i][cval];

}

void solve()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>n>>w;
    for(int i=1;i<=n;++i){
        cin>>wt[i]>>val[i];
    }
   
    for(int i=0;i<102;++i){
        for(int j=0;j<mx;++j){
            dp[i][j]=-1;
        }
    }

    for(int val=1e5;val>=1;--val){
        if(f(1,val)<=w){
            cout<<val<<endl;
            return;
        }
    }
    // cout<<f(1,90);

    

    
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