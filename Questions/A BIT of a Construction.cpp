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
int nerd(ll n){
    ll ans=0;
    while(n){
        ans++;
        n/=2;
    }
    return ans;
}
void solve(){
    ll n,k;
    cin>>n>>k;
    if(n==1){
        cout<<k<<endl;
        return ;
    }
    if(k==1){
        cout<<1<<" ";
        fr(i,n-1) cout<<0<<" ";
        cout<<endl;
        return ;
    }
    ll msb=nerd(k);
    if((1<<nerd(k))-1==k){
        cout<<k<<" ";
        fr(i,n-1) cout<<0<<" ";
        cout<<endl;
        return ;
    }
    msb--;
    ll t=(1<<msb)-1;
    cout<<t<<" ";
    cout<<k-t<<" ";
    fr(i,n-2) cout<<0<<" ";
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