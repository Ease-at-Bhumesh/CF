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
    ll a,b,c;
    cin>>a>>b>>c;
    priority_queue<int,vector<int>,greater<int>>q;
    q.push(a);
    q.push(b);
    q.push(c);
    ll i=0;
    while(i<5){
        auto t=q.top();
        q.pop();
        q.push(t+1);
        i++;
    }
    a=q.top(); q.pop();
    b=q.top(); q.pop();
    c=q.top();
    cout<<a*b*c<<endl; 
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