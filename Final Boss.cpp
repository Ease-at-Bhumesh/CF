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
    ll h; cin>>h;
    ll n; cin>>n;
    vector<ll>a(n);
    vector<ll>c(n);
    fr(i,n) cin>>a[i];
    fr(i,n) cin>>c[i];
    priority_queue<vector<ll>,vector<vector<ll>>,greater<vector<ll>>>pq;
    fr(i,n){
        pq.push({1,i});
    }
    while(!pq.empty()){
        ll turn=pq.top()[0];
        ll index=pq.top()[1];
        pq.pop();
        h-=a[index];
        if(h<=0){
            cout<<turn<<endl;
            return ;
        }
        pq.push({turn+c[index],index});
    }
    cout<<-1<<endl;
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