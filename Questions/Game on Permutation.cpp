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
    fr(i,n) m[v[i]]=i;
    set<ll>s;
    vector<ll>dp(n,0);
    s.insert(v[0]);
    dp[0]=1;
    fr1(i,1,n){
        auto it=lower_bound(s.begin(),s.end(),v[i]);
        if(*it>v[i]) it--;
        if(it==s.begin()){
            dp[i]=1;
        }
        else{
            ll index=m[*it];
            dp[i]=dp[index]+1;
        }
        s.insert(v[i]);
    }
    ll count=0;
    fr(i,n) if(dp[i]%2==0) count++;
    cout<<count<<endl;
    
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