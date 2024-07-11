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
    if(n==1){
        cout<<v[0]<<endl;
        return ;
    }
    ll indi=1;
    ll maxi=v[1];
    fr1(i,1,n){
        if(maxi<v[i]){
            maxi=v[i];
            indi=i;
        }
    }
    fr1(i,indi,n) cout<<v[i]<<" ";
    ll l=0;
    ll r=indi-1;
    if(indi!=n-1){
        cout<<v[r]<<" ";
        r--;
    }
    while(r>l and v[r]>v[l]){
        cout<<v[r]<<" ";
        r--;
    }
    while(l<=r){
        cout<<v[l]<<" ";
        l++;
    }
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