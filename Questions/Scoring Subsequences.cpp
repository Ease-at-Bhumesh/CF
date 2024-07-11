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
    vector<ll>res(n,0);
    fr(i,n){
        ll r=i;
        ll l=0;
        while(l<=r){
            ll mid=(l+r)/2;
            if(v[mid]>=(i-mid+1)){
                res[i]=max(i-mid+1,res[i]);
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
    }
    fr(i,n) cout<<res[i]<<" ";
    cout<<endl;
    return ;
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