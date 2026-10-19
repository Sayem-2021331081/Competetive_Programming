//Author : Sayem Islam
// Generated on 2026-10-19 12:51:09


#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define MOD 1000000007
int n,x;

void solve()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>n>>x;
    vector<int>price(n+2),page(n+2);
    for(int i=1;i<=n;++i){
        cin>>price[i];
    }
    for(int i=1;i<=n;++i){
        cin>>page[i];
    }
    vector<int>prev(x+1,-1),curr(x+1,-1);
    prev[0]=0;
    for(int i=1;i<=n;++i){
        for(int j=0;j<=x;++j){
            //notpick
            if(j<price[i]){
            curr[j]=prev[j];
            }
            //pick
            
           else if(j-price[i]!=-1){
                curr[j]=max(prev[j],prev[j-price[i]]+page[i]);

            }
        }
        prev=curr;
    }
    cout<<*max_element(curr.begin(),curr.end())<<endl;

    
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