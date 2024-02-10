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
    int n;
    cin>>n;
    vector<vector<int>>v(n,vector<int>(3));
    fr(i,n) cin>>v[i][1];
    fr(i,n) cin>>v[i][2];
    fr(i,n) v[i][0]=v[i][1]-1+v[i][2]-1;
    sort(v.begin(),v.end());
    fr(i,n) cout<<v[i][1]<<" ";
    cout<<endl;
    fr(i,n) cout<<v[i][2]<<" ";
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