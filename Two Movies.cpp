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
    ll n; cin>>n;
    vector<ll>a(n);
    vector<ll>b(n);
    fr(i,n) cin>>a[i];
    fr(i,n) cin>>b[i];
    ll a_s=0;
    ll b_s=0;
    ll c1=0;
    ll c2=0;
    fr(i,n){
        if(a[i]==b[i] and a[i]==1) c1++;
        if(a[i]==b[i] and a[i]==-1) c2++;
        else{
            if(a[i]>b[i]) a_s+=a[i];
            if(a[i]<b[i]) b_s+=b[i];
        }
    }
    ll maxi=max(a_s,b_s);
    ll mini=min(a_s,b_s);
    if(c1>0){
        ll k1=min(maxi-mini,c1);
        c1-=k1;
        mini+=k1;
        if(c1>0){
            if(c1%2==0){
                maxi=maxi+c1/2;
                mini=maxi;
            }
            else{
                maxi=maxi+(c1+1)/2;
                mini=maxi-1;
            }
        }
    }
    if(c2>0){
        ll k2=min(maxi-mini,c2);
        c2-=k2;
        maxi-=k2;
        if(c2>0){
            if(c2%2==0){
                maxi=maxi-c2/2;
                mini=maxi;
            }
            else{
                maxi=maxi-c2/2;
                mini=maxi-1;
            }
        }
    }
    cout<<mini<<endl;
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