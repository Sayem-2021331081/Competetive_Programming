#include <bits/stdc++.h>
using namespace std;
vector<int>ara={56,50,10,5,60,67,....,1000000};
int isOk(int id, int x)
{
    if (arr[id] <= arr[0])
        return 0;
    else
        return 1;
}

int main()
{
    int n = 3;
    int l = 0, r = n;
    int x = 3;
    
    while (l < r)
    {
        int mid = (l + r) / 2;
        if (isOk(mid) == 0) l = mid + 1;
        else r = mid;
    }
    
    int ans1 = l-1;
    cout << ans1 << endl;
}