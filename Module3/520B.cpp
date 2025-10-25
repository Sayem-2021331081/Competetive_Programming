//Author : Sayem Islam
// Generated on 2025-05-27 18:09:15


#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define MOD 1000000007

void solve()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    
    
    int cnt=0;
    while(m>n){
        
        
        if(m%2==0) m/=2;
        else m+=1;
        cnt++;
        
    }
    cnt+=(n-m);
    cout<<cnt<<endl;
    
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