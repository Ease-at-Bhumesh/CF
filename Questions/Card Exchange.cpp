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
    ll n,k;
    cin>>n>>k;
    unordered_map<ll,ll>m;
    ll sum=n;
    fr(i,n){
        ll a;
        cin>>a;
        m[a]++;
    }
    priority_queue<int>q;
    for(auto i:m){
        q.push(i.second);
    }
    ll res=0;
    while(!q.empty()){
        if(q.top()+res<k){
            cout<<sum<<endl;
            return ;
        }
        else{
            ll r=q.top();
            q.pop();
            if(r>k){
                sum--;
                q.push(r-k);
                res+=k-1;
            }
            else{
                sum--;
                res-=(k-r);
                res+=k-1;
            }
        }
    }
    cout<<k-1<<endl;
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