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
ll dp[100001];
ll nerd(ll index,vector<ll>&v,vector<ll>&pre,ll l,ll r){
    if(index>=v.size()) return 0;
    if(dp[index]!=-1) return dp[index];
    ll sum=0;
    ll ans=nerd(index+1,v,pre,l,r);
    auto k1=lower_bound(pre.begin(),pre.end(),pre[index]-v[index]+l);
    ll indi1=k1-v.begin();
    ll ans1=max(1+nerd(indi1+1,v,pre,l,r),ans);
    return dp[index]=max(ans,ans1);
}
void solve(){
    ll n,l,r; cin>>n>>l>>r;
    vector<ll>v(n);
    fr(i,n) cin>>v[i];
    vector<ll>pre=v;
    fr1(i,1,n) pre[i]+=pre[i-1];
    memset(dp,-1,sizeof(dp));
    fr(i,n){
        if(dp[i]==-1){
            dp[i]=nerd(i,v,pre,l,r);
        }
    }
    ll res=0;
    fr(i,n) res=max(dp[i],res);
    cout<<res<<endl;
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