#include <bits/stdc++.h>
using namespace std;
#define int long long
int isOk(int id, int x)
{
    if ( id*id< x)
        return 0;
    else
        return 1;
}

int main()
{
    int n;
    cin>>n;
    //uper
    int l=0,r=1e9+1;
    while (l < r)
    {
        int mid = (l + r) / 2;
        if (isOk(mid,n) == 0)
            l = mid + 1;
        else
            r = mid;
    }

    int ans1 =l;
    cout << ans1 << endl;
}