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
    sort(v.begin(),v.end());
    // unordered_map<ll,ll>m;
    map<ll,ll> m;
    int distinct=0;
    fr(i,n){
        // if(m.count(v[i]-1)){
        //     m[v[i]-1]--;
        //     m[v[i]]++;
        //     if(m[v[i]-1]==0) m.erase(v[i]-1);
        // }
        // else m[v[i]]++;
        if (m.count(v[i] - 1) && m[v[i] - 1] > 0) {
            m[v[i] - 1]--;
            m[v[i]]++;
        } else {
            m[v[i]]++;
            distinct++;
        }
    }
    // ll res=0;
    // for(auto i:m){
    //     res+=i.second;
    // }
    cout<<distinct<<endl;
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