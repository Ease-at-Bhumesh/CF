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
    set<ll>s;
    fr(i,n){
        ll k;cin>>k;
        s.insert(k);
    }
    vector<ll>v;
    for(auto i:s) v.push_back(i);
    vector<int>pre(v.size());
    pre[0]=v[0];
    for(int i=1;i<v.size();i++) pre[i]=v[i]-v[i-1];
    pre[pre.size()-1]=1;
    for(int i=pre.size()-2;i>=0;i--){
        if(pre[i]==1) pre[i]=pre[i+1]^1;
        else pre[i]=1;
    }
    if(pre[0]==1) cout<<"Alice"<<endl;
    else cout<<"Bob"<<endl;
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