#include<bits/stdc++.h>
using namespace std ;
int main(){
    vector<int>vec={1,2,2,3,4,7,7,20,30,31};
    vector<int>v={1,3,7,7,8};
    int x;
    cin>>x;
    //int n=vec.size();
    int  n=v.size();
    int l=0,r=n-1;
    //for first occurance
   /* while(l<r){
        int mid=(l+r)/2;
        if(vec[mid]<x) l=mid+1;
        else if(vec[mid]>=x) r=mid;
    }
    cout<<l<<" "<<r<<endl;*/
    //for upper bound

   /* while(l<r){
            cout<<"Infinite loop\n";
        int mid=(l+r)/2;
        if(v[mid]>x) r=mid+1;
        else if(v[mid]<=x) l=mid;
    }
    cout<<l<<endl;*/
    //so finally


int left=0,right=n;
//lo
 while(l<r){
        int mid=(left+right)/2;
        if(v[mid]<x) left=mid+1;
        else if(v[mid]>=x) right=mid;
    }

    while(l<r){
        int mid=(left+right)/2;
        if(v[mid]<=x) left=mid+1;
        else if(v[mid]>x) right=mid;
    }
    cout<<left-1<<endl;


}
