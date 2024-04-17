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
const ll mod=1e9+7;
ll nerd(ll n) {
    ll count=0;
    while(n){
        n&=(n-1);
        count++;
    }
    return count;
}
void solve(){
    ll n,k;
    cin>>n>>k;
    vector<ll>v(n);
    fr(i,n) cin>>v[i];
    vector<ll>a(64,0);
    fr(i,n){
        fr(j,64){
            if(a[j]){
                ll r=(j & v[i]);
                a[r]+=a[j];
                a[r]%=mod;
            }
        }
        a[v[i]]++;
        a[v[i]]%=mod;
    }
    ll res=0;
    fr(i,64){
        if(nerd(i)==k) {
            res+=a[i];
            res%=mod;
        }
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
