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
    vector<ll>v(n);
    fr(i,n) cin>>v[i];
    unordered_map<ll,ll>m;
    vector<ll>dp(n,0);
    m[v[n-1]]=n-1;
    for(int i=n-2;i>=0;i--){
        if(m.count(v[i])){
            dp[i]=max(dp[i+1],1-i+m[v[i]]);
            m[v[i]]=max(m[v[i]],i+dp[i+1]);
        }
        else{
            dp[i]=dp[i+1];
            m[v[i]]=i+dp[i+1];
        }
    }
    cout<<dp[0]<<endl;
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