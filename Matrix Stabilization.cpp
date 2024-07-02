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
    vector<vector<ll>>v(n,vector<ll>(m));
    fr(i,n) {fr(j,m) cin>>v[i][j];}
    ll dx[4]={1,-1,0,0};
    ll dy[4]={0,0,-1,1};
    fr(i,n){
        fr(j,m){
            ll res=INT_MIN;
            fr(k,4){
                ll nx=i+dx[k]; ll ny=j+dy[k];
                if(nx>=0 and nx<n and ny>=0 and ny<m) res=max(res,v[nx][ny]);
            }
            v[i][j]=min(res,v[i][j]);     
        }
    }
    fr(i,n){
        fr(j,m) cout<<v[i][j]<<" ";
        cout<<endl;
    }
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