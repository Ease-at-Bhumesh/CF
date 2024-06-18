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
    ll n; cin>>n;
    ll m; cin>>m;
    ll k; cin>>k;
    vector<ll>v(n);
    fr(i,n) cin>>v[i];
    sort(v.begin(),v.end());
    ll res=0;
    ll extra=0;
    fr(i,n){
        if(k==0){
            break;
        }
        extra+=min(k,m);
        if(i!=n-1) v[i+1]+=extra;
        res+=v[i]*min(k,m);
        k-=min(k,m);
    }
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