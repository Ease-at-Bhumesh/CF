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
    vector<ll>p(n+1);
    fr(i,n){
        cin>>v[i];
        p[v[i]]=i;
    }
    ll l=n/2+1;
    ll r=n+1-l;
    while(l-1>=0 and p[l-1]<p[l] and p[r+1]>p[r]){
        l--;
        r++;
    }
    cout<<l-1<<endl;
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

