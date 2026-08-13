//Author : Sayem Islam
// Generated on 2026-08-11 09:08:05

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define MOD 1000000007

const int mx = 1e7 + 123;
bitset<mx> isPrime;
vector<int> primes;

const int MX = 1e6 + 123;
int pre[MX] = {};
int ans[mx]={};

void primeGen(int n)
{
    for(int i = 3; i <= n; i += 2)
        isPrime[i] = 1;

    int sq = sqrt(n);

    for(int i = 3; i <= sq; i += 2)
    {
        if(isPrime[i])
        {
            for(int j = i * i; j <= n; j += i)
            {
                isPrime[j] = 0;
            }
        }
    }

    isPrime[2] = 1;
    primes.push_back(2);

    for(int i = 3; i <= n; i += 2)
    {
        if(isPrime[i])
        {
            primes.push_back(i);
        }
    }
}


void solve()
{
   int n;
   cin>>n;
   int val=ans[n]+1;
   val*=n;
   val/=2;
   cout<<val<<endl;
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int lim = 1e6;


    primeGen(lim);
    for(int i=1;i<=MX;++i){
        pre[i]=i;
    }
    for(auto& e:primes){
        for(int i=e;i<=MX;i+=e){
            pre[i]/=e;
            pre[i]*=(e-1);
        }
    }
    // for(int i=1;i<=MX;++i){
    //    pre[i] = (pre[i] * pre[i]) + pre[i-1];
    // }
    for(int i=1;i<=lim;++i){
        for(int j=i;j<=lim;j+=i){
            ans[j]+=(pre[i]*i);
        }
    }

    

    int tc = 1;
    cin >> tc;

    for(int i = 1; i <= tc; i++)
    {
        // cout<<"Case "<<i<<": ";
        solve();
    }

    return 0;
}