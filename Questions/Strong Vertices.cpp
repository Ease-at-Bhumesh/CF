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
    vector<ll>a(n);
    vector<ll>b(n);
    vector<pii>v(n);
    fr(i,n) cin>>a[i];
    fr(i,n) cin>>b[i];
    fr(i,n) a[i]-=b[i];
    fr(i,n) v[i]={a[i],i+1};
    sort(v.begin(),v.end());
    vector<ll>t;
    ll last=v[n-1].first;
    t.push_back(v[n-1].second);
    ll i=n-2;
    while(v[i].first==last and i>=0){
        t.push_back(v[i].second);
        i--;
    }
    cout<<t.size()<<endl;
    rfr(i,t.size()-1,0) cout<<t[i]<<" ";
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