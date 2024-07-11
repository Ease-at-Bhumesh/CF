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
    ll m; cin>>m;
    vector<vector<ll>>v1(n,vector<ll>(m));
    vector<vector<ll>>v2(n,vector<ll>(m));
    fr(i,n) fr(j,m) cin>>v1[i][j];
    fr(i,n) fr(j,m) cin>>v2[i][j];
    unordered_map<ll,vector<ll>>mp;
    fr(i,n){
        auto t=v1[i];
        sort(t.begin(),t.end());
        mp[t[0]]=t;
    }
    fr(i,n){
        auto t=v2[i];
        sort(t.begin(),t.end());
        if(mp[t[0]]!=t){
            cout<<"No"<<endl;
            return ;
        }
    }
    mp.clear();
    fr(i,m){
        vector<ll>t;
        fr(j,n) t.push_back(v1[j][i]);
        sort(t.begin(),t.end());
        mp[t[0]]=t;
    }
    fr(i,m){
        vector<ll>t;
        fr(j,n) t.push_back(v2[j][i]);
        sort(t.begin(),t.end());
        if(mp[t[0]]!=t){
            cout<<"NO"<<endl;
            return ;
        }
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