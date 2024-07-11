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
    ll n,m;
    cin>>n>>m;
    vector<ll>v(n);
    fr(i,n) cin>>v[i];
    priority_queue<ll,vector<ll>,greater<ll>>q1;
    ll sum=0;
    ll res=0;
    fr1(i,m,n){
        sum+=v[i];
        q1.push(v[i]);
        if(sum<0){
            sum+=2*(-q1.top());
            q1.pop();
            res++;
        }
    }
    priority_queue<ll>q2;
    sum=0;
    for(ll i=m-1;i>=1;i--){
        sum+=v[i];
        q2.push(v[i]);
        if(sum>0){
            sum-=2*(q2.top());
            q2.pop();
            res++;
        }
    }
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