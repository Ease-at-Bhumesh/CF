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
    vector<ll>power(n);
    vector<ll>position(n);
    vector<pii>v(n);
    fr(i,n) cin>>power[i];
    fr(i,n) cin>>position[i];
    fr(i,n) v[i]={position[i],power[i]};
    sort(v.begin(),v.end());
    ll i=0;
    ll j=0;
    ll index=n;
    fr(i,n){
        if(v[i].first>0){
            index=i;
            break;
        }
    }
    ll right=index;
    ll left=index-1;
    ll extra=0;
    ll x=1;
    while(left>=0 or right<=n-1){
        extra+=k;
        if(left>=0 and v[left].first==-x){
            extra-=v[left].second;
            left--;
        }
        if(right<=n-1 and v[right].first==x){
            extra-=v[right].second;
            right++;
        }
        if(extra<0){
            cout<<"NO"<<endl;
            return ;
        }
        x++;
    }
    cout<<"YES"<<endl;
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