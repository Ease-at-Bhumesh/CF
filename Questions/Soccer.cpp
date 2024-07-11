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
    ll x1; cin>>x1;
    ll y1; cin>>y1;
    ll x2; cin>>x2;
    ll y2; cin>>y2;
    if(x1<y1 and x2>y2){
        cout<<"NO"<<endl;
        return ;
    }
    else if(y1<x1 and y2>x2){
        cout<<"NO"<<endl;
        return ;
    }
    else{
        cout<<"YES"<<endl;
        return ;
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