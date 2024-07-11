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
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    vector<pii>f(k);
    vector<ll>v(n);
    fr(i,k){
        ll l;
        cin>>l;
        l--;
        f[i]={l,-1};
    }
    fr(i,k){
        ll r;
        cin>>r;
        r--;
        f[i].second=r;
        for(ll j=f[i].first;j<=f[i].second;j++) v[j]=i;
    }
    ll q;
    cin>>q;
    vector<ll>f1(n+1,0);
    while(q--){
        ll x;
        cin>>x;
        x--;
        f1[v[x]]++;
        ll g=min(x,f[v[x]].first+f[v[x]].second-x);
        
    }
    string res="";

    fr(i,k){
        if(f1[i]%2!=0){
            for(ll j=f[i].second;j>=f[i].first;j--){
                res+=s[j];
            }
        }
        else{
            for(ll j=f[i].first;j<=f[i].second;j++){
                res+=s[j];
            }
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