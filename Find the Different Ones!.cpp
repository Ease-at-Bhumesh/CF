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
    set<ll>t;
    fr(i,n-1){
        if(v[i]!=v[i+1]){
            m[i+1]=i+2;
            t.insert(i+1);
        }
    }
    ll q;
    cin>>q;
    fr(i,q){
        ll l,r;
        cin>>l>>r;
        auto it=t.lower_bound(l);
        if(it!=t.end() and m[*it]<=r) cout<<*it<<" "<<m[*it]<<endl;
        else cout<<-1<<" "<<-1<<endl;
    }
    cout<<endl;
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