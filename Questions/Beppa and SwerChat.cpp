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
    vector<ll>v1(n);
    vector<ll>v2(n);
    fr(i,n) cin>>v1[i];
    fr(i,n) cin>>v2[i];
    ll j=n-1;
    ll res=0;
    for(ll i=n-1;i>=0;i--){
        while(j>=0 and v1[j]!=v2[i]){
            j--;
        }
        if(j>=0) res++;
    }
    cout<<n-res<<endl;
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