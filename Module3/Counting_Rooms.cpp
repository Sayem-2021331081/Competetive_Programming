#include<bits/stdc++.h>
using namespace std;

int dx[]={1,0,-1,0};
int dy[]={0,1,0,-1};
int main(){
    int n,m;
    cin>>n>>m;
    char grid[n][m];
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            cin>>grid[i][j];
        }
    }
    int vis[n][m];
    memset(vis,0,sizeof vis);
    int cnt=0;
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            if(vis[i][j] || grid[i][j]=='#') continue;
            queue<pair<int,int>>q;
            q.push({i,j});
            vis[i][j]=1;
            cnt++;
            while(!q.empty()){
                pair<int,int>u=q.front();
                q.pop();
                int x=u.first;
                int y=u.second;
                for(int k=0;k<4;++k){
                    int nx=x+dx[k];
                    int ny=y+dy[k];
                    if(nx>=0 && nx<n && ny>=0 && ny<m && vis[nx][ny]==0 && grid[nx][ny]=='.'){
                        q.push({nx,ny});
                        vis[nx][ny]=1;
                    }
                }
                
    }
    

}

    }
    cout<<cnt<<endl;
}