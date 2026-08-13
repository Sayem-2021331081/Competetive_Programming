//Author : Sayem Islam
// Generated on 2025-07-12 19:05:25


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
    vector<int>v(n);
    map<int,int>mp;
    for(auto& e:v){
        cin>>e;
        mp[e]++;
    }
    while(m--){
        int x;
        cin>>x;
        
        auto it=mp.upper_bound(x);
        if(it!=mp.begin()){
            --it;
            if(it->second>0) {
                cout<<it->first<<endl;
                it->second--;
                if(it->second==0) mp.erase(it);
            }
            else cout<<-1<<endl;
        }
        else cout<<-1<<endl;

        }
    
    
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