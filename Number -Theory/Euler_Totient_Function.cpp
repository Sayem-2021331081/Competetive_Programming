//Author : Sayem Islam
// Generated on 2026-08-11 09:08:05


#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define MOD 1000000007
const int mx = 1e7+123;
bitset<mx> isPrime;
vector<int> primes;
 
void primeGen ( int n )
{
    for ( int i = 3; i <= n; i += 2 ) isPrime[i] = 1;
 
    int sq = sqrt(n);
    for ( int i = 3; i <= sq; i += 2 ) {
        if(isPrime[i]) {
            for ( int j = i*i; j <= n; j += i ) {
                isPrime[j] = 0;
            }
        }
    }
 
    isPrime[2] = 1;
    primes.push_back(2);
 
    for ( int i = 3; i <= n; i += 2 ) {
        if(isPrime[i] == 1) {
            primes.push_back(i);
        }
    }
}
int PHI(int n){
    int phi=n;
    for(auto& p:primes){
        if(p*p>n) break;
        if(n%p==0){
            while(n%p==0){
                n/=p;
            }
            phi/=p;
            phi*=(p-1);
        }
    }
    if(n>1){
         phi/=n;
        phi*=(n-1);
    }
    return phi;
}

void solve()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
   int n;
   cin>>n;
   cout<<PHI(n)<<endl;
    


    
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int lim = 1e6;
    primeGen(lim);

    int tc = 1;
    cin >> tc;

    for (int i = 1; i <= tc; i++)
    {
        solve();
    }

    return 0;
}