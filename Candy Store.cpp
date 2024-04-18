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
    ll res=1;
    ll a;
    cin>>a;
    ll b;
    cin>>b;
    ll l=b;
    ll gcd=a*b;
    fr1(i,1,n){
        ll x,y;
        cin>>x>>y;
        ll k1=__gcd(gcd,x*y);
        ll k2=lcm(l,y);
        if(k1%k2!=0){
            res++;
            gcd=x*y;
            l=y;
        }
        else{
            gcd=k1;
            l=k2;
        }
    }
    cout<<res<<endl;
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