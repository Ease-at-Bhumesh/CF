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
    ll k; cin>>k;
    map<ll,ll>m;
    fr(i,n){
        ll a; cin>>a;
        m[a]++;
    }
    vector<ll>v;
    for(auto i:m){
        if(i.second%2!=0) v.push_back(i.first);
    }
    if(k==1){
        ll res=0;
        fr1(i,1,v.size()) res+=v[i];
    }
    unordered_map<ll,ll>mp;
    sort(v.begin(),v.end());
    fr(i,v.size()) cout<<v[i]<<" ";
    cout<<endl;
    if(v.size()==1){
        if(n%2!=0){
            cout<<0<<endl;
            return ;
        }
        else{
            cout<<-1<<endl;
            return ;
        }
    } 
    ll res=0;
    fr(i,v.size()){
        if(mp.count(v[i]%k)){
            res+=(v[i]-mp[v[i]%k])/k;
            mp.erase(v[i]%k);
        }
        else mp[v[i]%k]=v[i];
    }
    if(mp.size()==0){
        cout<<res<<endl;
        return ;
    }
    cout<<-1<<endl;
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