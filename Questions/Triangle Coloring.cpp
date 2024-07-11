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
ll fpow(ll a,ll b){
    ll ans=1;
    while(b){
        if(b&1) ans=ans*a%mod;
        a=a*a%mod;
        b>>=1;
    }
    return ans;
}
void solve(){
    ll n;
    cin>>n;
    ll ans=1;
    for(int i=1;i<=n;i+=3){
        vector<ll>v;
        fr(j,3){
            ll x;
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        int cnt=1;
        if(v[0]==v[1])cnt++;
        if(v[0]==v[2])cnt++;
        ans=ans*cnt%mod;
    }
    n/=3;
    fr1(i,1,n+1) ans=ans*i%mod;
    fr1(i,1,n/2+1) ans=ans*fpow(i,mod-2)%mod*fpow(i,mod-2)%mod;
    cout<<ans<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;
    while(t-->0){
        solve();
    }
    return 0;
}