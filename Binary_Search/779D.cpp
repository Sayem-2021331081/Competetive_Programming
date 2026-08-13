//Author : Sayem Islam
// Generated on 2025-07-12 11:42:39


#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define MOD 1000000007
string s,t;
vector<int>v;
bool canConvert(int op){
    vector<int>deleted(s.size());
    for(int i=0;i<op;++i){
        deleted[v[i]-1]=1;
    }
    int cnt=0;
    for(int i=0;i<s.size();++i){
        if(cnt==t.size()) {
            break;
        }
        if(!deleted[i] && s[i]==t[cnt]){
            cnt++;
        }
    }
    if(cnt==t.size()) return true;
    else return false;

}
int isok(int id){
    if(canConvert(id)) return 0;
    return 1;
}
void solve()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin>>s>>t;
    int n=s.size();
    for(int i=0,x;i<n;++i){
        cin>>x;
        v.push_back(x);
    }
    int l=0,r=n+1;
    while(l<r){
        int mid=(l+r)/2;
        if(isok(mid)==0) l=mid+1;
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