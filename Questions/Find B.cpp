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
    ll n,q;
    cin>>n>>q;
    vector<ll>v(n);
    vector<ll>s;
    fr(i,n){
        cin>>v[i];
        if(v[i]==1) s.push_back(i+1);
    }
    fr1(i,1,n) v[i]+=v[i-1];
    while(q--){
        ll l,r;
        cin>>l>>r;
        if(l==r){
            cout<<"NO"<<endl;
        }
        else{
            ll sum=v[r-1];
            if(l>1) sum-=v[l-2];
            auto k1=lower_bound(s.begin(),s.end(),l);
            auto k2=upper_bound(s.begin(),s.end(),r);
            ll count=k2-k1;
            if(count+r-l+1>sum){
                cout<<"NO"<<endl;
            }
            else cout<<"YES"<<endl;
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
