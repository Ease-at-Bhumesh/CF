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
    ll n,m,k;
    cin>>n>>m>>k;
    vector<ll>v(n);
    fr(i,n) cin>>v[i];
    unordered_map<ll,ll>mp;
    fr(i,m){
        ll a;
        cin>>a;
        mp[a]++;
    }
    unordered_map<ll,ll>t;
    ll d=0;
    fr(i,m){
        if(mp.count(v[i])){
            t[v[i]]++;
            if(t[v[i]]<=mp[v[i]]) d++;
        }
    }
    ll res=0;
    if(d>=k) res++;
    ll i=0;
    while(m+i<n){
        if(mp.count(v[i])){
            t[v[i]]--;
            if(t[v[i]]<mp[v[i]]) d--;
        }
        if(mp.count(v[m+i])){
            t[v[i+m]]++;
            if(t[v[i+m]]<=mp[v[i+m]]) d++;
        }
        if(d>=k) res++;
        i++;
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