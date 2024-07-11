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
ll nerd(int n){
    fr1(i,1,n+1){
        if((n*(n+1))/2<(i)*(i)) return i-1;
    }
    return n;
}
void solve(){
    ll n; cin>>n;
    ll sum=0;
    fr1(i,1,n+1) sum+=(2*i-1)*i;
    cout<<sum<<" "<<2*n<<endl;
    rfr(i,n,1){
        cout<<1<<" "<<i<<" ";
        fr(j,n) cout<<j+1<<" ";
        cout<<endl;
        cout<<2<<" "<<i<<" ";
        fr(j,n) cout<<j+1<<" ";
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