int par[N];
void init(int i){
    par[i]=i;
    sz[i]=1;
}
//ultimate parent
//1->2->3->4

int find(int i){
    if(par[i]==i) {
        return i;
    }
    return par[i]=find(par[i]);//1->4,2->4,3->4

}

void join(int a,int b){
    int pa=find(a);
    int pb=find(b);
    //par[pa]=pb;
    // par[pb]=pa;
    if(pa==pb){
        return;
    }
    if(sz[pa]<sz[pb]){
        swap(pa,pb);
    }
    par[pb]=pa;
    sz[pa]+=pb;
}