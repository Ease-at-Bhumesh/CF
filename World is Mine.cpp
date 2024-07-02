#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod=998244353;
const int N=5013;

int c[N],f[N];
int dp[N][N];
void solve(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)c[i]=0;
    for(int i=1,x;i<=n;i++)cin>>x,c[x]++;
    int pr=0,g=0;
    for(int i=1;i<=n;i++)for(int j=0;j<=n;j++)dp[i][j]=1e9;
    dp[0][0]=0;
    for(int i=1;i<=n;i++)if(c[i]){
        g++;
        for(int j=0;j<g;j++){
            dp[i][j+1]=min(dp[pr][j]+1,dp[i][j+1]);
            if(j>=c[i])dp[i][j-c[i]]=min(dp[i][j-c[i]],dp[pr][j]);
        }
        pr=i;
    }
    int mn=1e9;
    for(int i=0;i<=n;i++)mn=min(mn,dp[pr][i]);
    cout<<mn<<'\n';
}

int main(){
    ios::sync_with_stdio(false);
    int T=1;
    cin>>T;
    while(T--)solve();
}