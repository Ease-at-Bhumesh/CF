#include<iostream>
using namespace std;
const int N=5e5+5;
int f[N],a[N],p[N];
int t,n,m,d;
void solve(){
    cin>>n>>m>>d;
    for(int i=1;i<=n;i++) cin>>f[i];
    for(int i=1;i<=m;i++) cin>>a[i];
    for(int i=1;i<=n;i++){
        p[f[i]]=i;
    }
    int ans=1e9;
    for(int i=1;i<m;i++){
        ans=min(ans,p[a[i+1]]-p[a[i]]);
        if(d<n-1) ans=min(ans,d-p[a[i+1]]+p[a[i]]+1);
    }
    cout<<max(ans,0)<<endl;
}
int main(){
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}