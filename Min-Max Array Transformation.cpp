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
ll mini(ll index,vector<ll>&a,vector<ll>&b){
    ll l=0;
    ll r=index;
    ll res=b[index];
    while(l<=r){
        ll mid=(l+r)/2;
        if(b[mid]>=a[index]){
            res=min(res,b[mid]);
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    return res-a[index];
}
ll maxi(ll index,vector<ll>&a,vector<ll>&b){
    ll l=index;
    ll r=a.size()-1;
    ll res=b[index];
    while(l<=r){
        ll mid=(l+r)/2;
        if(a[mid]<=b[index]){
            res=max(b[mid],res);
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    return res-a[index];
}
void solve(){
    ll n;
    cin>>n;
    vector<ll>a(n);
    vector<ll>b(n);
    fr(i,n) cin>>a[i];
    fr(i,n) cin>>b[i];
    fr(i,n) cout<<mini(i,a,b)<<" ";
    cout<<endl;
    ll ind=0;
    fr(i,n){
        ind=max(ind,i);
        while(ind<n-1 && a[ind+1]<=b[ind]) ind++;
        cout<<b[ind]-a[i]<<' ';
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

