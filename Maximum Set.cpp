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
    ll x,y;
    cin>>x>>y;
    ll count=0;
    ll t=x;
    while(t*2<=y){
        t*=2;
        count++;
    }
    ll ans=(y/(1<<count)-x+1);
    if(count){
        ll d=(1<<(count-1))*3;
        y/=d;
        if(y>=x){
            ans+=(y-x+1)*count;
        }
    }
    cout<<count+1<<" "<<ans<<endl;
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
