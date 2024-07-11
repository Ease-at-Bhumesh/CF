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
    ll q; cin>>q;
    vector<ll>v(n+1,0);
    map<ll,vector<ll>>m;
    fr1(i,1,n+1){
        cin>>v[i];
        v[i]^=v[i-1];
        m[v[i]].push_back(i);
    }
    while(q--){
        ll l,r; cin>>l>>r;
        if(!(v[l-1]^v[r])) cout<<"YES"<<endl;
        else{
            if(m[v[l-1]].size()==0 or m[v[r]].size()==0) cout<<"NO"<<endl;
            else{
                auto x=upper_bound(m[v[l-1]].begin(),m[v[l-1]].end(),r);
                x--;
                auto y=lower_bound(m[v[r]].begin(),m[v[r]].end(),l);
                if(l<=*y and *x>*y and *x<=r) cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
            }
        }
    }
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