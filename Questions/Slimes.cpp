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
ll right(int index,vector<ll>&v){
    ll original=v[index];
    if(index!=0) original-=v[index-1];    
    ll l=index+1;
    ll r=v.size()-1;
    ll res=INT_MAX;
    while(l<=r){
        ll mid=(l+r)/2;
        if(v[mid]-v[index]>original){
            res=mid-index;
            r=mid-1;
        }
        else l=mid+1;
    }
    if(res==INT_MAX) return -1;
    return res;
}
ll left(int index,vector<ll>&v){
    ll original=v[index];
    if(index!=v.size()-1) original-=v[index+1];
    ll l=0;
    ll r=index-1;
    ll res=INT_MAX;
    while(l<=r){
        ll mid=(l+r)/2;
        if(v[mid]-v[index]>original){
            res=index-mid;
            l=mid+1;
        }
        else r=mid-1;
    }
    if(res==INT_MAX) return -1;
    return res;
}
void solve(){
    ll n;
    cin>>n;
    vector<ll>v(n);
    vector<ll>v1(n);
    vector<ll>v2(n);
    fr(i,n) cin>>v[i];
    v1=v;
    v2=v;
    fr1(i,1,n) v1[i]+=v1[i-1];
    for(int i=n-2;i>=0;i--) v2[i]+=v2[i+1];
    fr(i,n){
        if(i==0) cout<<right(i,v1)<<" ";
        else if(i==n-1) cout<<left(i,v2)<<" ";
        else{
            if(right(i,v1)==-1) cout<<left(i,v2)<<" ";
            else if(left(i,v2)==-1) cout<<right(i,v1)<<" ";
            else  cout<<min(left(i,v2),right(i,v1))<<" ";
        }
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