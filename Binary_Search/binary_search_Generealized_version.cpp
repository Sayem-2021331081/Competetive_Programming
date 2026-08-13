#include<bits/stdc++.h>
using namespace std;
int arr[100]={1,2,3,3,3,4,5};
//eta dorbo evabe
//int arr2[100]={0,0,1,1,1,1,1};
int isOk(int id,int x){
    if(arr[id]<x) return 0;
    else return 1;
}

int main(){
    int n=3;
    int l=0,r=n;
    int x=3;
    // int arr2[100]={0,0,1,1,1,1,1}; 1 er lower_bound ber kro
    while (l<r)
    {
        int mid=(l+r)/2;
        if(isOk(mid,x)==0) l=mid+1;
        else r=mid;
    }
    int ans0=l-1;
    int ans1=l;
    cout<<ans0<<" "<<ans1<<endl;
    


}