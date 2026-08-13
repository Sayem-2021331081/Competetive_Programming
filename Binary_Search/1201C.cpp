//Author : Sayem Islam
// Generated on 2025-07-12 08:47:17


#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define MOD 1000000007
vector<int>v;
int n, k;
int minoperations(int m,vector<int>&v){
    int sum=0;
    for(int i=n/2;i<n;++i){
        if(v[i]<=m) sum+=m-v[i];

    }
    return sum;
}
int isok(int id,vector<int>&v){
    if(minoperations(id,v)>k) return 1;
    else return 0;

}
void solve()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin>>n>>k;
    for(int i=0,x;i<n;++i) {
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    int mi=n/2;
    int l=0,r=1e9+1+k;
    while(l<r){
        int mid=(l+r)/2;
        if(isok(mid,v)==0) l=mid+1;
        else r=mid;

    }
    cout<<l-1<<endl;
    
    
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