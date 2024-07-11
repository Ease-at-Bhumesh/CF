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
ll nerd(int k,int prev,int curr){
    if(prev<0) return 0;
    if(k==1) return 1;
    return nerd(k-1,curr-prev,prev);
}
void solve(){
    ll n,k;
    cin>>n>>k;
    ll res=0;
    for(int i=0;i<=n-i;i++){
        res+=nerd(k,n-i,n);
    }
    cout<<res<<endl;
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
