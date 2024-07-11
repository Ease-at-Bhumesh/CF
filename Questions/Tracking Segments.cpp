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
ll nerd(ll index, vector<vector<ll>>& segments, vector<ll>& changes, ll n) {
    vector<ll> t(n + 1, 0);
    fr(i, index + 1) {
        t[changes[i]] = 1;
    }
    fr1(i, 1, n + 1) t[i] += t[i - 1];
    for(auto i : segments) {3
        ll l = i[0];
        ll r = i[1];
        if (t[r] - t[l - 1] > (r - l + 1) / 2) return 1;
    }
    return 0;
}
void solve(){
    ll n,m; cin>>n>>m;
    vector<vector<ll>>v;
    fr(i,m){
        ll a,b; cin>>a>>b;
        v.push_back({a,b});
    }
    ll q; cin>>q;
    vector<ll>queries(q);
    fr(i,q) cin>>queries[i];
    ll low=0;
    ll high=q-1;
    ll res=-1;
    while(low<=high){
        ll mid=(low+high)/2;
        if(nerd(mid,v,queries,n)){
            res=mid+1;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
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