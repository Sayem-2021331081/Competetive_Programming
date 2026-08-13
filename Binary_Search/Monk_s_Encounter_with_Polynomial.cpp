//Author : Sayem Islam
// Generated on 2025-07-11 08:47:06


#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define MOD 1000000007
int a, b, c, k;
int isok(int x){
    int f=(a*x*x)+(b*x)+c;
    if(f<k) return 0;
    else return 1;

}
void solve()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin>>a>>b>>c>>k;
    int l=0,r=sqrt(1e10);
    while(l<r){
        int mid=(l+r)/2;
        if(!isok(mid)) l=mid+1;
        else r=mid;
    }
    cout<<l<<endl;

    
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