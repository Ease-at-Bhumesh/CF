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
ll nerd(ll x,ll y,ll k){
    if(k==0) return x;
    ll m=x/y;
    if(m==0 and x==1){
        return k%(y-1)+1;
    }
    else if(m==0){
        if(y-x>k) return x+k;
        else nerd(1,y,k-(y-x));
    }
    m++;
    if(m*y-x>k) return x+k;
    else{
        k-=m*y-x;
        x=m*y;
        while(x%y==0){
            x/=y;
        }
        return nerd(x,y,k);
    }
}
void solve(){
    ll x,y,k; cin>>x>>y>>k;
    cout<<nerd(x,y,k)<<endl;
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