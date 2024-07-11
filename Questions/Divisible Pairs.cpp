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
    ll n,x,y;
    cin>>n>>x>>y;
    vector<ll>v(n);
    fr(i,n) cin>>v[i];
    unordered_map<string,ll>m;
    ll res=0;
    fr(i,n){
        ll r1=v[i]%x;
        ll r2=v[i]%y;
        ll r3=(x-r1)%x;
        string s=to_string(r3)+" "+to_string(r2);
        if(m.count(s)) res+=m[s];
        s=to_string(r1)+" "+to_string(r2);
        m[s]++;
    }
    // for(auto i:m) cout<<i.first<<" "<<i.second<<endl;
    cout<<res<<endl;
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