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
    ll n,m,d;
    cin>>n>>m>>d;   
    vector<ll>v(n);
    fr(i,n) cin>>v[i];
    priority_queue<ll,vector<ll>,greater<ll>>q;
    ll res=0;
    ll sum=0;
    fr(i,n){
        if(v[i]>0){
            if(q.size()<m){
                sum+=v[i];
                q.push(v[i]);
                res=max(res,sum-(i+1)*d);
            }
            else{
                if(q.top()<v[i]){
                    sum-=q.top();
                    q.pop();
                    sum+=v[i];
                    q.push(v[i]);
                    res=max(res,sum-(i+1)*d);
                }   
            }
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