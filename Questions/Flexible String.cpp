#include<bits/stdc++.h>
#define ll long long
#define pii pair<ll,ll>
#define fs first
#define ss second
#define fr(i,n) for(ll i=0;i<n;i++)
#define fr1(i,a,n) for(ll i=a;i<n;i++)
#define rfr(i,n,a) for(ll i=n;i>=a;i--)
#define pb push_back
#define all(v) v.begin(),v.end()
using namespace std;
const  ll mod=998244353;
void solve(){
    ll n,k;
    cin>>n>>k;
    string a,b;
    cin>>a>>b;
    ll ans=0;
    unordered_map<char,ll>m;
    ll y=0;
    fr(i,n){
        if(!m.count(a[i])) m[a[i]]=y++;
    }
    ll mask=(1<<m.size());
    fr(t,mask){
        ll count=__builtin_popcount(t);
        if(count>k) continue;
        ll res=0;
        fr(i,n){    
            ll j=i;
            while(j<n and (a[j]==b[j] || (t>>(m[a[j]]))&1)) j++;
            res+=((j-i)*(j-i+1))/2;
            i=j;
        }
        ans=max(res,ans);
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