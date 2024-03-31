#include<bits/stdc++.h>
#define ll long long
#define pii pair<ll,ll>
#define fs first
#define ss second
#define fr(i,n) for(ll i=0;i<n;i++)
#define fr1(i,a,n) for(ll i=a;i<n;i++)
#define rfr(i,n,a) for(ll i=n;i>=a;i--)
#define all(v) v.begin(),v.end()
using namespace std;
const  ll mod=998244353;
void solve(){
    ll n,l;
    cin>>n>>l;
    vector<pii>v(n);
    fr(i,n){
        ll a,b;
        cin>>a>>b;
        v[i]={b,a};
    }
    sort(v.begin(),v.end());
    ll ans=0;
    fr(i,n){
        ll sum=0;
        priority_queue<ll>q;
        fr1(j,i,n){
            sum+=v[j].second;
            q.push(v[j].second);
            while(q.size() and sum+v[j].first-v[i].first>l){
                sum-=q.top();
                q.pop();
            }
            ans=max(ans,(ll)q.size());
        }
    }
    cout<<ans<<endl;
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