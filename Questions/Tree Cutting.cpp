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
ll res;
ll vis[100002];
int nerd(ll node,vector<vector<ll>>&v,int t){
    ll temp=1;
    for(auto i:v[node]){
        if(vis[i]) continue;
        vis[i]=1;
        temp+=nerd(i,v,t);
    }
    if(temp>=t){
        res++;
        return 0;
    }
    return temp;
}
void solve(){
    ll n,k; cin>>n>>k;
    k++;
    vector<vector<ll>>v(n+1);
    fr(i,n-1){
        ll e1,e2; cin>>e1>>e2;
        v[e1].push_back(e2);
        v[e2].push_back(e1);
    }
    ll low=1;
    ll high=n;
    ll ans=low;
    while(low<=high){
        res=0;
        memset(vis,0,sizeof(vis));
        ll mid=(low+high)/2;
        vis[1]=1;
        nerd(1,v,mid);
        if(res>=k){
            ans=mid;
            low=mid+1;
        }
        else high=mid-1;
    }
    cout<<ans<<endl;
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