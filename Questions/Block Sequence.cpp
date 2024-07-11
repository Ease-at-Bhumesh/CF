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
ll nerd(ll index,vector<ll>&v,vector<ll>&dp){
    if(index>=v.size()) return 0;
    if(dp[index]!=-1) return dp[index];
    ll k1=1+nerd(index+1,v,dp);
    ll k2=INT_MAX;
    if(v[index]<=v.size()-index-1){
        k2=nerd(index+v[index]+1,v,dp);
    }
    return dp[index]=min(k1,k2);
}
void solve(){
    ll n;
    cin>>n;
    vector<ll>v(n);
    fr(i,n) cin>>v[i];
    vector<ll>dp(n,-1);
    cout<<nerd(0,v,dp)<<endl;
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