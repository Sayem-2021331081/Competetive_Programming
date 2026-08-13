//Author : Sayem Islam
// Generated on 2025-07-12 15:43:15


#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define MOD 1000000007
int n,key;
vector<int>v;
bool isok(int id){
    if(v[id]>=key) return true;
    return false;
}
void solve()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
   
    cin>>n;
    for(int i=0,x;i<n;++i){
        cin>>x;
        v.push_back(x);
    }
    cin>>key;
    int l=0,r=n;
    while(l<r){
        int mid=(l+r)/2;
        if(!isok(mid)) l=mid+1;
        else r=mid;
    }
    // if(l==n) cout<<-1<<endl;
    // else cout<<l<<endl;
    cout<<l<<endl;
    
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