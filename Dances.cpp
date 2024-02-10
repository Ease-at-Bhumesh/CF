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
ll nerd(vector<ll>&a,vector<ll>&b){
    ll n=a.size();
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    ll count=0;
    ll i=0;
    ll j=0;
    while(j<n){
        if(a[i]<b[j]){
            i++;
            j++;
        }
        else{
            j++;
            count++;
        }
    }
    return count;
}
void solve(){
    ll n;
    cin>>n;
    ll m;
    cin>>m;
    vector<ll>a(n);
    vector<ll>b(n);
    fr(i,n-1) cin>>a[i];
    fr(i,n) cin>>b[i];
    vector<ll>a1=a;
    vector<ll>b1=b;
    ll left=1;
    ll right=m;
    ll res=1e10;
    a[n-1]=1;
    ll base=nerd(a,b);
    while(left<=right){
        ll mid=(left+right)/2;
        a=a1;
        b=b1;
        a[n-1]=mid;
        ll w=nerd(a,b);
        if(w>base){
            res=min(res,mid);
            right=mid-1;
        }
        else{
            left=mid+1;
        }
    }
    if(res==1e10){
        cout<<m*base<<endl;
        return ;
    }
    cout<<(res-1)*base+(m-res+1)*(base+1)<<endl;
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