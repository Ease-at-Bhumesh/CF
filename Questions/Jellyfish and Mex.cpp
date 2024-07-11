#include<bits/stdc++.h>
#define ll long long
#define pii pair<ll,ll>
#define fs first
#define ss second
#define fr(i,n) for(ll i=0;i<n;i++)
#define fr1(i,a,n) for(ll i=a;i<n;i++)
#define rfr(i,n,a) for(ll i=n;i>=a;i--)
#define mp make_pair
#define pb push_back
#define all(v) v.begin(),v.end()
using namespace std;
const  ll mod=998244353;
ll dp[5001];
ll nerd(ll mex,map<ll,ll>&m){
    if(mex==0) return 0;
    ll ans=LLONG_MAX;
    if(dp[mex]!=-1) return dp[mex];
    fr(i,mex){
        ans=min(i+(m[i]-1)*mex+nerd(i,m),ans);
    }
    return dp[mex]=ans;
}
void solve(){
    ll n; cin>>n;
    map<ll,ll>m;
    fr(i,n){
        ll a; cin>>a;
        if(a<=n) m[a]++;
    }
    ll mex=n;
    fr(i,n){
        if(m[i]==0){
            mex=i;
            break;
        }
    }
    if(mex==0){
        cout<<0<<endl;
        return ;
    }
    memset(dp,-1,sizeof(dp));
    cout<<nerd(mex,m)<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;
    cin>>t;
    while(t-->0){
        solve();
    }
    return 0;
}

