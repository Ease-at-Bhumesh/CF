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
const  ll MOD=1000000007;
const ll MAX=300001;
long long dp[MAX];
long long f(ll n) {
    if(n == 1) return dp[n] = 1;
    if(n == 2) return dp[n] = 3;
    if(dp[n] != -1) return dp[n];
    long long op1 = ((f(n-1) ) % MOD);
    long long op2 = ((f(n-2)*2 ) % MOD * (n-1)) % MOD;
    return dp[n] = (op1 + op2) % MOD;
}
void solve(){
    ll n,k;
    cin>>n>>k;
    unordered_map<ll,ll>m;
    fr(i,k){
        ll a,b;
        cin>>a>>b;
        m[a]=1;
        m[b]=1;
    }
    memset(dp,-1,sizeof(dp));
    n-=m.size();
    if(n==0){
        cout<<1<<endl;
        return ;
    }
    cout<<f(n)<<endl;
    return ;
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