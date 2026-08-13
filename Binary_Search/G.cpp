//Author : Sayem Islam
// Generated on 2025-07-14 22:59:09


#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define MOD 1000000007
int n, k;
vector<int>v;
int f(int mxsum){
    int temp=0,cnt=1;
    for(int i=0;i<n;++i){
        temp+=v[i];
        if(temp>mxsum){
            temp=v[i];
            cnt++;
        }
    }
    return cnt;
}
bool isok(int mxsum){
    int cnt = f(mxsum);
    cout<<cnt<<endl;
     if (cnt>= k) return 0;
    else return 1;


}
void solve()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin>>n>>k;
    for(int i=0,x;i<n;++i){
        cin>>x;
        v.push_back(x);
    }
    int l=1,r=accumulate(v.begin(),v.end(),0ll);
    while(l<r){
        int mid=(l+r)/2;
        if(f(mid)>k) l=mid+1;
        else r=mid;
    }
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