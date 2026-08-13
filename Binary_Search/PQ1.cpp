//Author : Sayem Islam
// Generated on 2026-07-06 15:23:30


#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define MOD 1000000007
bool isok(int mid,int k,int n,vector<int>&v){
   
    int i=0,j=0;
    int cnt=1;
    while(j<n){
        if(abs(v[i]-v[j])>=mid){
            cnt++;
            i=j;
            
            

        }
        j++;

    }
    //cout<<cnt<<endl;
    return cnt>=k;
}

void solve()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int>v={1,2,4,8,9};
    int n=v.size();
     sort(v.begin(),v.end());
    int k=3;
    int l=0,r=abs(*min_element(v.begin(),v.end())-*max_element(v.begin(),v.end()));
    //cout<<r<<endl;
    int ans=0;
    int i=0;
    while(l<=r){
        int mid=(l+r)/2;
        // cout<<"i=="<<i<<" "<<mid<<endl;
        if(isok(mid,k,n,v)){
            ans=mid;
            l=mid+1;
        }
        else r=mid-1;
       // i++;
    }
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