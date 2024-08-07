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
void solve(){
    ll n;
    cin>>n;
    ll x;
    cin>>x;
    vector<ll>v(n);
    fr(i,n) cin>>v[i];
    vector<ll>dp(n,0);
    if(v[n-1]<=x) dp[n-1]=1;
    fr1(i,1,n) v[i]+=v[i-1];
    for(ll i=n-2;i>=0;i--){
        ll key=x;
        if(i!=0) key+=v[i-1];
        ll index=upper_bound(v.begin(),v.end(),key)-v.begin();
        dp[i]+=index-i;
        if(index<=n-2) dp[i]+=dp[index+1];
    }
    ll res=0;
    fr(i,n) res+=dp[i];
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