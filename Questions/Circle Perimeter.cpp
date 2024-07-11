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
    ll r; cin>>r;
    ll res=0;
    fr1(x,1,r+1){
        ll left=sqrt(r*r-x*x);
        if(left*left<r*r-x*x) left++; 
        ll right=sqrt((r+1)*(r+1)-x*x);
        if(right*right==(r+1)*(r+1)-x*x) right--;
        res+=(right-left+1)*4;
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