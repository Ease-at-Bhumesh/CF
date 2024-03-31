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
    fr1(i,1,n) v[i]+=v[i-1];
    ll q;
    cin>>q;
    while(q--){
        ll l;
        ll u;
        cin>>l>>u;
        l--;
        ll low=l;
        ll high=n-1;
        ll res=l;
        while(low<=high){
            ll mid=(low+high)/2;
            ll value=v[mid];
            if(l) value-=v[l-1];
            if(value<=u){
                res=mid;
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        ll value1=v[res];
        if(l>0) value1-=v[l-1];
        ll value2=INT_MAX;
        if(res+1<n) value2=v[res+1];
        if(l>0) value2-=v[l-1];
        if(abs(value1-u)<abs(value2-u)){
            cout<<res+1<<" ";
        }
        else cout<<res+2<<" ";
    }
    cout<<endl;
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