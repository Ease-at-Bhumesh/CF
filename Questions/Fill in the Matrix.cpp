#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,m;cin>>n>>m;
    if(m>1)cout<<min(n+1,m)<<endl;
    else cout<<0<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++)printf("%d ",(min(i,m-1)+j)%m);
        puts("");
    }
}
int main(){
    int T;cin>>T;
    while(T--)solve();
    return 0;
}