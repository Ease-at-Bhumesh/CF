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
    vector<vector<ll>>v;
    fr(i,n){
        ll k;
        cin>>k;
        fr(j,k){
            ll r;
            cin>>r;
            v.push_back({r,i+1,j});
        }
    }
    sort(v.begin(),v.end());
    unordered_map<ll,ll>m;
    ll res1=0;
    ll res2=0;
    m[v[0][1]]=1;
    fr1(i,1,v.size()){
        if(v[i][1]!=v[i-1][1]){
            res1++;
            if(!m.count(v[i][1])) m[v[i][1]]=1;
            else res2++;
        }
        else if(v[i][2]!=v[i-1][2]+1){
            res1++;
            res2++;
        }
    }
    cout<<res2<<" "<<res1<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;
    // cin>>t;
    while(t-->0){
        solve();
    }
    return 0;
}